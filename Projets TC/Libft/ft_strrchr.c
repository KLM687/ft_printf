/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 14:46:03 by flee              #+#    #+#             */
/*   Updated: 2021/06/10 18:39:08 by cesco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *hay, int needle)
{
	size_t	len;

	len = ft_strlen(hay);
	if ((char)needle == '\0')
		return ((char *)hay + len);
	while (len--)
		if (*(hay + len) == (char)needle)
			return ((char *)(hay + len));
	return (NULL);
}
