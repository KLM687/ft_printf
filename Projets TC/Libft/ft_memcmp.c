/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 11:12:43 by flee              #+#    #+#             */
/*   Updated: 2021/06/10 12:36:05 by flee             ###   ########.fr       */
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
	while (index < size)
	{
		if (tab1[index] != tab2[index])
			return ((unsigned char)tab1[index] - (unsigned char)tab2[index]);
		index++;
	}
	return ((unsigned char)tab1[index] - (unsigned char)tab2[index]);
}
