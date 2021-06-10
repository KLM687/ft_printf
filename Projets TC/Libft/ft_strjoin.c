/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 15:24:28 by flee              #+#    #+#             */
/*   Updated: 2021/06/10 12:36:48 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		cmpt1;
	int		cmpt2;
	char	*str;
	int		index;

	index = 0;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	str = malloc(sizeof(char)
			* (ft_strlen((char *)s1) + ft_strlen((char *)s2)));
	cmpt1 = ft_strlen((char *)s1);
	cmpt2 = cmpt1 + ft_strlen((char *)s2);
	if (!str)
		return (NULL);
	while (index < cmpt1)
	{
		str[index] = s1[index];
		index++;
	}
	ft_strlcat (str, (char *)s2, cmpt2);
	return (str);
}
