/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <flee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 16:30:21 by flee              #+#    #+#             */
/*   Updated: 2021/06/08 13:53:31 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

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
