/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 11:53:04 by flee              #+#    #+#             */
/*   Updated: 2021/07/21 16:33:28 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>

void	ft_station(va_list para_info, const char *argc)
{
	char	rail;
	int		ticket;
	char	c;

	rail = *argc;
	ticket = 1;
	if (rail== 'c' )
		c = (int)va_arg(para_info, int);
	else if (rail == 's')
		printf("wtf");
	write(1 , &c, 1);
}


int	ft_write_argc(va_list para_info, const char *argc)
{
	char c;
	int nbc;
	int i;
	int state;

	c = 0;
	nbc = 0;
	i = 0;
	state = 0;
	while (argc[i] != '\0')
	{
		state = 0;
		c = argc[i];
		if (c == '%')
		{
			i++;
			ft_station(para_info, &argc[i]);
			state = 1;
		}
		if (state != 1)
			write(1, &c, 1);
		i++;
		nbc++;
	}
	return (nbc);
}

int	ft_printf(const char *argc, ...)
{
	va_list para_info;
	int nbc;

	va_start (para_info, argc);
	nbc = ft_write_argc (para_info,argc);
	return (nbc);
}

int main (void)
{
	int c = 1;

	ft_printf("bbb%c%cbbb", c, c);
}
