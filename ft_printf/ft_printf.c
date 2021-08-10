/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 11:53:04 by flee              #+#    #+#             */
/*   Updated: 2021/07/22 16:26:14 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>

int	ft_station(va_list para_info, const char *argc)
{
	char	rail;
	//int		ticket;
	int		nb;

	rail = *argc;
	//ticket = 1;
	nb = 0;
	if (rail== 'c' )
		nb = ft_putchar((int)va_arg(para_info, int));
	else if (rail == 's')
		nb = ft_putstr((char *)va_arg(para_info, char *));
	else if (rail == 'p')
		nb = ft_putarg((int)va_arg(para_info, int));
	else if (rail == 'd' || rail == 'i')
		nb = ft_putnbr((int)va_arg(para_info, int), 0);
	else if (rail == 'u')
		nb = ft_printf_u((int)va_arg(para_info,int));
	//printf("|nb = %d|\n", nb);
	return (nb);
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
			nbc += ft_station(para_info, &argc[i]);
			state = 1;
		}
		if (state != 1)
		{
			nbc++;
			write(1, &c, 1);
		}
		i++;
	}
	//printf("|nbc = %d|\n",nbc);
	return (nbc);
}

int	ft_printf(const char *argc, ...)
{
	va_list para_info;
	int nbc;
	
	nbc = 0;
	va_start (para_info, argc);
	nbc = ft_write_argc (para_info,argc);
	return (nbc);
}

int main (void)
{
	int nb = 0;
	int a = -9;
	unsigned int t = -9;

	nb = ft_printf("%uuuu%uuuu%u",a,a,a);
	printf("\n%u\n", t);
	printf("%d\n", nb);
}