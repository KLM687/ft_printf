/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:08:35 by flee              #+#    #+#             */
/*   Updated: 2021/07/14 17:54:09 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_check(char *memory)
{
	int	i;

	i = 0;
	while (memory[i] != '\0')
	{
		if (memory[i] == '\n')
			return (-1);
		i++;
	}
	return (1);
}

char	*ft_fill_line(char *memory, char *line)
{
	int	len;

	len = 0;
	printf("memory fill line = %s\n",memory);
	line = ft_substr((char const *)memory, 0, ft_strlen_n(memory));
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*memory;
	char		buf[BUFFER_SIZE];
	char		*line;
	int			read_return;

	printf("begin memory = %s\n",memory);
	line = NULL;
	if (!fd || BUFFER_SIZE <= 0)
		return (NULL);
	read_return = read(fd, buf, BUFFER_SIZE);
	while (read_return > 0)
	{
		memory = ft_strjoin(memory, buf);
		read_return = read(fd, buf, BUFFER_SIZE);
		read_return = ft_check(memory);
		printf("memory = %s \n",memory);
		printf("read = %d \n",read_return);
	}
	line = ft_fill_line(memory, line);
	memory = ft_substrfree(memory,(ft_strlen_n(memory) + 1), ft_strlen(memory));
	return (line);
}
