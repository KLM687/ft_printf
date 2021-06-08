/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <flee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 16:30:21 by flee              #+#    #+#             */
/*   Updated: 2021/06/07 10:48:40 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dest1;
	char	*src1;
	int		index;

	dest1 = (char *)dest;
	src1 = (char *)src;
	index = 0;
	while (index < n)
	{
		dest1[index] = src1[index];
		index++;
	}
	return (dest1);
}

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	char	*tmp;
	int		index;

	tmp = malloc(sizeof(char) * size);
	if (!tmp)
		return (NULL);
	ft_memcpy (tmp, src, size);
	ft_memcpy (dest, tmp, size);
	return (dest);
}
