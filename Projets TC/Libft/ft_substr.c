/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 11:06:16 by flee              #+#    #+#             */
/*   Updated: 2021/06/10 12:37:19 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *src, unsigned int start, size_t len)
{
	char			*memory;
	unsigned long	size;
	unsigned long	cmpt;

	size = 0;
	cmpt = start;
	if (src == NULL || len < 0)
		return (NULL);
	while (src[cmpt] != '\0' && size < len)
	{
		size++;
		cmpt++;
	}
	memory = malloc(sizeof(char) * size);
	if (!memory)
		return (NULL);
	cmpt = 0;
	while (cmpt < size)
	{
		memory[cmpt] = src[start];
		start++;
		cmpt++;
	}
	memory[cmpt] = '\0';
	return (memory);
}
