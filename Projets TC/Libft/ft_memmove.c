/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <flee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 16:30:21 by flee              #+#    #+#             */
/*   Updated: 2021/06/10 14:49:01 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	char	*tmp;

	tmp = malloc(sizeof(char) * size);
	if (!tmp)
		return (NULL);
	ft_memcpy (tmp, src, size);
	ft_memcpy (dest, tmp, size);
	free(tmp);
	return (dest);
}
