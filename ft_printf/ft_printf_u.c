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

int	ft_printf_u(int nb)
{
	unsigned int index;
	int i;

	index = nb;
	//printf("printf_u = \n%d\n", index);
	i = ft_putnbr(index, 0);
	return (i);
}

