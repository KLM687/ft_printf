/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 11:12:43 by flee              #+#    #+#             */
/*   Updated: 2021/06/10 15:23:25 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int 	ft_memcmp(const void *pointer1, const void *pointer2, size_t size)
{
	char				*tab1;
	char				*tab2;
	unsigned long		index;

	tab1 = (char *)pointer1;
	tab2 = (char *)pointer2;
	index = 0;
	if (size == 0)
		return (0);
	while (*tab1 == *tab2 && index < size && *tab1 && *tab2)
	{
		tab1++;
		tab2++;
		index++;
	}
	return ((unsigned char)*tab1 - (unsigned char)*tab2);
}
