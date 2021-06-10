/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 10:19:49 by flee              #+#    #+#             */
/*   Updated: 2021/06/09 12:03:11 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen1(char const *s1)
{
	int	index;

	index = 0;
	while (s1[index] != '\0')
		index++;
	return (index - 1);
}

char	*ft_trim(int len, int size, char const *s1, char *memory)
{
	len = len - (size * 2) + 1;
	memory = malloc(sizeof(char) * len);
	memory = ft_substr(s1, size, len);
	return (memory);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	 	index;
	int		len;
	int		size;
	char	*memory;

	index = 0;
	len = ft_strlen1(s1);
	size = 0;
	memory = NULL;
	while (s1[index] == set[index])
	{
		if (set[index + 1] == '\0')
		{
			while (s1[len - index] == set[size])
			{
				if (s1[len - index] == '\0' && set[size] == '\0')
					return (ft_trim(len, size, s1, memory));
				index--;
				size++;
			}
		}
		index++;
	}
	return (NULL);
}
