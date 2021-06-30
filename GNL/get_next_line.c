/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 10:49:31 by flee              #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/06/30 20:54:51 by cesco            ###   ########.fr       */
=======
/*   Updated: 2021/06/29 11:43:00 by flee             ###   ########.fr       */
>>>>>>> cfe8726f9e289f5bebdee7ef3c2e537fb615920e
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

<<<<<<< HEAD
int	fill_line(char **line, char *buffer, int *offset)
{
	int		to_endl;
	char	*new_line;
	int		line_len;

	line_len = *line ? ft_strlen(*line) : 0;
	to_endl = 0;
	while (buffer[to_endl] && buffer[to_endl] != '\n')
		to_endl++;
	new_line = (char*)ft_calloc(line_len + to_endl + 1, sizeof(char));
	if (!new_line)
		return (-1);
	if (*line != NULL)
	{
		ft_strlcpy(new_line, *line, line_len + 1);
		free(*line);
	}
	ft_strlcat(new_line, buffer, line_len + to_endl + 1);
	*line = new_line;
	if (buffer[to_endl] == '\n')
	{
		*offset += to_endl + 1;
		return (1);
	}
	*offset = 0;
	return (0);
}

int	begin_line(char **line, char *buffer, int *offset)
{
	int to_endl;

	to_endl = 0;
	while (buffer[*offset + to_endl] && buffer[*offset + to_endl] != '\n')
		to_endl++;
	*line = (char*)ft_calloc(to_endl + 1, sizeof(char));
	if (!*line)
		return (-1);
	ft_strlcpy(*line, buffer + *offset, to_endl + 1);
	if (buffer[*offset + to_endl] == '\n')
	{
		*offset += to_endl + 1;
		return (1);
	}
	*offset = 0;
	return (0);
}

int	get_next_line(int fd, char **line)
{
	static char	buffer[BUFFER_SIZE + 1] = "";
	static int	offset = 0;
	int			end_file;
	int			read_return;
	int			end_line;

	if (fd < 0 || !line || BUFFER_SIZE <= 0)
		return (-1);
	end_file = 0;
	end_line = 0;
	read_return = 0;
	*line = NULL;
	if (offset)
		end_line = begin_line(line, buffer, &offset);
	while (end_line != 1 && !end_file)
	{
		read_return = read(fd, buffer, BUFFER_SIZE);
		if (read_return == -1 || end_line == -1)
			return (-1);
		buffer[read_return] = '\0';
		end_line = fill_line(line, buffer, &offset);
		end_file = read_return < BUFFER_SIZE;
	}
	return (!end_file || offset != 0);
}
