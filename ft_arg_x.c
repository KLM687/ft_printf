/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 12:10:53 by flee              #+#    #+#             */
/*   Updated: 2021/08/11 12:10:56 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr_base16(unsigned int nbr, int set, char *base)
{
	static int	index;
	int			len_base;
	long int	nb;
	int			printnb;

	index = set;
	nb = (long)nbr;
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

int	ft_arg_x(int nb, char rail)
{
	int nbc;
	unsigned int i;
	char *base;

	if (rail == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (nb < 0)
		i = 4294967296 + nb;
	else
		i = nb;
	nbc = ft_putnbr_base16(i, 0, base);
	return (nbc);
}

