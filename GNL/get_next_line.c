/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:08:35 by flee              #+#    #+#             */
/*   Updated: 2021/07/07 10:20:48 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_fill_line(char *first, char *second, char *memory, int fd)
{
	int len_first;
	
	len_first = ft_strlcpy(first, memory);
	while (first[len_first] != '\n' || first[len_first] != '\0')
	{
		len_first = read (fd, second, BUFFER_SIZE);
		if (len_first == 0)
		{
			first = ft_strjoin(first, second);
			
}



int get_next_line(int fd, char **line)
{
	static char	memory[BUFFER_SIZE + 1];
	int			read_return;
	char		*first;
	char		*second;
	
	read_return = 0;
	seconde = 0;
	if (!fd || !line || BUFFER_SIZE <= 0)
		return (-1);
	read_return = read(fd, memory, BUFFER_SIZE);
	if (read_return == -1)
		return (-1);
	if (read_return != 0)
	{
		first = (char *)malloc(sizeof(char) * read_return);
		ft_fill_line(fi

