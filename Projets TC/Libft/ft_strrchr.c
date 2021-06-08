/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 14:46:03 by flee              #+#    #+#             */
/*   Updated: 2021/06/07 14:57:53 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *hay, int needle)
{
	int	index;

	index = 0;
	while (hay[index] != '\0')
		index++;
	while (index >= 0)
	{
		if (hay[index] == needle)
			return ((char *)hay + index);
		index--;
	}
	return (NULL);
}
