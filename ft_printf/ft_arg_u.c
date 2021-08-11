/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 12:10:43 by flee              #+#    #+#             */
/*   Updated: 2021/08/11 12:10:46 by flee             ###   ########.fr       */
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

int	ft_arg_u(int nb)
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

