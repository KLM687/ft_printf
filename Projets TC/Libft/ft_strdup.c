/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:59:07 by flee              #+#    #+#             */
/*   Updated: 2021/05/25 14:46:33 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int 	ft_strlen(char *src, int j)
{
	while (src[j] != '\0')
		j++;
	return (j);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		j;
	int 	size;

	i = 0;
	j = 0;
	j = ft_strlen(src, j);
	size = sizeof(*dest);
	if (!(dest = malloc(size * (j + 1))))
		return (NULL);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
