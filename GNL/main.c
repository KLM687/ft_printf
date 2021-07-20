/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 13:08:08 by flee              #+#    #+#             */
/*   Updated: 2021/07/20 16:17:39 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main (int argc, char **argv)
{
	int fd;
	char *line;
	int nb_line = 10;
	int i = 0;

	fd = open(argv[1], O_RDONLY);
	while (i < nb_line)
	{
		line = get_next_line(fd);
		printf("main line %d = %s\n",i , line);
		free(line);
		i++;
	}
	return (0);
	
}
