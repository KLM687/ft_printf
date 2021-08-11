/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 12:10:21 by flee              #+#    #+#             */
/*   Updated: 2021/08/11 12:10:25 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr_base16(unsigned long nbr, int set, char *base)
{
	static int	index;
	unsigned long		len_base;
	unsigned long 		nb;
	int			printnb;

	index = set;
	nb = nbr;
	len_base = 0;
	while (base[len_base])
			len_base++;
	if (nb >= len_base)
		ft_putnbr_base16((nb / len_base), index, base);
	printnb = base[nb % len_base];
	write(1, &printnb, 1);
	index++;
	return (index);
}

int	ft_arg_p(unsigned long nb)
{
	int nbc;
	double long i;
	char		*base;

	base = "0123456789abcdef";
	nbc = 2;
	ft_putstr("0x");
	if (nb < 0)
		i = 9223372036854775807 + 9223372036854775807 + 1 + nb;
	else
		i = nb;
	nbc += ft_putnbr_base16(i, 0, base);
	return (nbc);
}
