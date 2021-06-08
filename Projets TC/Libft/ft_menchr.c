/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_menchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 10:49:46 by flee              #+#    #+#             */
/*   Updated: 2021/06/07 11:11:27 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
	char	*memory;
	char	needle;
	int		index;

	memory = (char *)memoryBlock;
	needle = (char)searchedChar;
	index = 0;
	while (index < size)
	{
		if (memory[index] == needle)
		{
			return (memory + index);
		}
		index++;
	}
	return (NULL);
}
