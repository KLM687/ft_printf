/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:08:35 by flee              #+#    #+#             */
/*   Updated: 2021/07/16 14:58:02 by flee             ###   ########.fr       */
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
			return (0);
		i++;
	}
	return (1);
}

char	*ft_fill_line(char *memory, char *line)
{
	int	len;

	len = 0;
	line = ft_substr((char const *)memory, 0, ft_strlen_n(memory));
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*memory;
	char		buf[BUFFER_SIZE + 1];
	char		*line;
	int			read_return;
	int			check;

	line = NULL;
	read_return = 1;
	check = 1;
	if (!fd || BUFFER_SIZE <= 0)
		return (NULL);
	while (read_return > 0 && check == 1)
	{
		read_return = read(fd, buf, BUFFER_SIZE + 1);
		check = ft_check(memory);
		if (read_return == -1)
			return (NULL);
		if (memory == NULL && read_return == 0)
			return (NULL);
		memory = ft_strjoin(memory, buf, read_return);
		check = ft_check(memory);
		printf("check = %d read = %d memory = %s\n",check, read_return, memory);
	}
	line = ft_fill_line(memory, line);
	printf("line = %s\n",line);
	memory = ft_substrfree(memory,(ft_strlen_n(memory) + 1), ft_strlen(memory));
	printf("memory = %s\n",memory);
	return (line);
}
