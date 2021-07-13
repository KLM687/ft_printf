/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:08:35 by flee              #+#    #+#             */
/*   Updated: 2021/07/13 17:34:40 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_check(char *memory)
{
	if (memory)
	{
		int i;
		int n;

		i = 0;
		n = 0;
		while (memory[i] != '\0')
		{
			if (memory[i] == '\n')
				n++;
			i++;
		}
		return (n);
	}
	return (0);
}

int	ft_fill_memory(char *memory, char buf[BUFFER_SIZE + 1], int offset, int fd)
{
	int	read_return;
	int	i;

	i = 0;
	read_return = read(fd, buf, BUFFER_SIZE);
	printf("read = %d\n",read_return);
	memory = ft_strjoin(memory, buf);
	printf("memory = %s\n",memory);
	while (memory[i] && offset >= 0)
	{
		if (memory[i] == '\n')
			offset--;
		i++;
		if (offset < 0)
			return (0);
	}
	printf("fill memory ok\n");
	return (read_return);
}

char *ft_fill_line(char *memory, char *line, int offset)
{
	int i;
	int len;
	int start;
	
	i = 0;
	len = 0;
	while (memory[i] && offset > 0)
	{
		if (memory[i] == '\n')
			offset--;
		i++;
	}
	start = i;
	while (memory[i] != '\0' && memory[i] != '\n')
	{
		i++;
		len++;
	}
	line = (char *)malloc(sizeof(char) * len);
	i = 0;
	while (memory[start] != '\0' && memory[start] != '\n')
	{
		line[i] = memory[start];
		i++;
		start++;
	}
	return (line);
}	


char	*get_next_line(int fd)
{
	static char	*memory;
	char		buf[BUFFER_SIZE + 1];
	char		*line;
	int			read_return;
	int			offset;

	memory = NULL;
	line = NULL;
	read_return = 1;
	offset = ft_check(memory);
	printf("offset = %d\n", offset);
	if (!fd || BUFFER_SIZE <= 0)
	{
		printf("WTF\n");
		return (NULL);
	}
	while (read_return > 0)
	{
		read_return = ft_fill_memory(memory, buf, offset, fd);
		printf("read_return = %d\n",read_return);
	}
	line = ft_fill_line(memory, line, offset);
	return (line);
}
