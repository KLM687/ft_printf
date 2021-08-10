/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 14:54:40 by flee              #+#    #+#             */
/*   Updated: 2021/08/10 16:12:23 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr_base16(unsigned int nbr, int set)
{
	static int	index;
	int			len_base;
	long int	nb;
	int			printnb;
	char		base[16];

	index = set;
	nb = (long)nbr;
	len_base = 0;
	ft_strlcpy(base, "0123456789abcdef", 17);
	while (base[len_base])
			len_base++;
	if (nb >= len_base)
		ft_putnbr_base16((nb / len_base), index);
	printnb = base[nb % len_base];
	write(1, &printnb, 1);
	index++;
	return (index);
}

int	ft_print_p(int  nb)
{
	int nbc;
	unsigned int i;

	nbc = 2;
	ft_putstr("0x");
	if (nb < 0)
		i = 4294967296 + nb;
	else
		i = nb;
	nbc += ft_putnbr_base16(i, 0);
	return (nbc);
}
