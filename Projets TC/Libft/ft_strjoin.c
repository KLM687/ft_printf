/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 15:24:28 by flee              #+#    #+#             */
/*   Updated: 2021/06/09 10:19:20 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char const *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dst, char *src, unsigned int size)
{
	unsigned int	dstlen;
	unsigned int	srclen;
	unsigned int	i;

	dstlen = 0;
	srclen = 0;
	i = 0;
	while (dst[dstlen])
		dstlen++;
	while (src[srclen])
		srclen++;
	if (size == 0 || size <= dstlen)
		return (srclen + size);
	while (i < srclen && i < size - dstlen)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		cmpt1;
	int		cmpt2;
	char	*str;
	int		index;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
	cmpt1 = ft_strlen(s1);
	cmpt2 = cmpt1 + ft_strlen(s2);
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
