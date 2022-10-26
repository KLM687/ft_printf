/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 15:33:55 by flee              #+#    #+#             */
/*   Updated: 2021/07/22 16:12:17 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n, int set)
{
	long int	a;
	static int i;

	a = n;
	i = set;
	if (a < 0)
	{
		i++;
		ft_putchar('-');
		a = -a;
	}
	if (a > 9)
	{
		ft_putnbr(a / 10, i);
		ft_putnbr(a % 10, i);
	}
	else
	{
		ft_putchar(a + '0');
		i++;
	}
	return (i);
}
