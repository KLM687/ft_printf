/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 14:41:01 by flee              #+#    #+#             */
/*   Updated: 2021/06/07 14:45:23 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char 	*ft_strchr(const char *hay, int needle)
{
	int	index;

	index = 0;
	while (hay[index] != '\0')
	{
		if (hay[index] == needle)
			return ((char *)hay + index);
		index++;
	}
	return (NULL);
}
