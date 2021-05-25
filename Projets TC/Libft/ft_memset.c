/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 13:03:43 by flee              #+#    #+#             */
/*   Updated: 2021/05/25 14:36:53 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned int	index;
	unsigned char	*memory;
	unsigned char	value;

	index = 0;
	memory = str;
	value = c;
	while (index < n)
	{
		memory[index] = value;
		index++;
	}
	return (memory);
}
