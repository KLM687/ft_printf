/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putarg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 12:48:26 by flee              #+#    #+#             */
/*   Updated: 2021/07/22 15:30:22 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr_base16(int nbr)
{
	static int	index;
	int			len_base;
	long int	nb;
	int			printnb;
	char		base[16];

	nb = (long)nbr;
	len_base = 0;
	ft_strlcpy(base, "0123456789abcdef", 17);
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	while (base[len_base])
			len_base++;
	if (nb >= len_base)
		ft_putnbr_base16((nb / len_base));
	printnb = base[nb % len_base];
	write(1, &printnb, 1);
	index++;
	return (index);
}

int	ft_putarg(int nb)
{
	int nbc;

	nbc = ft_putnbr_base16(nb);
	return (nbc);
}

