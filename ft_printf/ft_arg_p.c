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

static int	ft_putnbr_base16(unsigned long int nbr, int set)
{
	static int	index;
	int			len_base;
	long int	nb;
	int			printnb;
	char		*base;

	index = set;
	nb = (long)nbr;
	len_base = 0;
	base = "0123456789abcdef";
	while (base[len_base])
			len_base++;
	if (nb >= len_base)
		ft_putnbr_base16((nb / len_base), index);
	printnb = base[nb % len_base];
	write(1, &printnb, 1);
	index++;
	return (index);
}

int	ft_arg_p(long long nb)
{
	int nbc;
	unsigned long int i;

	nbc = 2;
	if (nb == -4294967295)
	{
		ft_putstr("0xffffffff00000001");
		return (18);
	}
	ft_putstr("0x");
	if (nb < 0)
		i = 4294967296 + nb;
	else
		i = nb;
	nbc += ft_putnbr_base16(i, 0);
	return (nbc);
}
