/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 12:10:19 by flee              #+#    #+#             */
/*   Updated: 2021/07/22 16:26:09 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_putnbr_unsigned(unsigned int n, int set)
{
        long int        a;
        static int i;

        a = n;
        i = set;
        if (a > 9)
        {
                ft_putnbr_unsigned(a / 10, i);
                ft_putnbr_unsigned(a % 10, i);
        }
        else
        {
                ft_putchar(a + '0');
                i++;
        }
        return (i);
}

int	ft_printf_u(int nb)
{
	unsigned int index;
	int i;
	
	index = 0;
	if (nb < 0)
		index = 4294967296 + nb;
	else
		index = nb;
	i = ft_putnbr_unsigned(index, 0);
	return (i);
}

