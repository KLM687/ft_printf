/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 10:49:31 by flee              #+#    #+#             */
/*   Updated: 2021/06/29 11:43:00 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"



int	ft_fill_line(char *buf, char **line)
{
	size_t len_buf;

	len_buf = ft_strlen(buf) + 1;
	if (!len_buff)
		return (-1);
	*line = calloc(len_buf, sizeof(char *));
	ft_strlcpy(*line, buff, len_buf);
	return (1);
}

int	ft_refill_line()
{

}


int	get_next_line(int fd, char **line)
{
	static	char	*memory;
	ssize_t			count_byte;
	char			*buf[BUFFER_SIZE];

	if (!fd || BUFFER_SIZE < 0)
		return (-1);
	count_byte = read(fd, *buf, BUFFER_SIZE);
	if (count_byte == -1)
		return (-1);
	if (count_byte == 0 || )
	{
		if (ft_fill_line(buf, *line))
			return (0);
		return (-1);
	}
}
