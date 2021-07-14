/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 13:08:08 by flee              #+#    #+#             */
/*   Updated: 2021/07/14 16:47:27 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main (int argc, char **argv)
{
	int fd;
	char *line;

	fd = open (argv[1], O_RDONLY);
	line = get_next_line(fd);
	printf("main line = %s\n",line);
	line = get_next_line(fd);
	printf("main line 2 = %s\n",line);
	line = get_next_line(fd);
	printf("main line 3 = %s\n",line);
	
}
