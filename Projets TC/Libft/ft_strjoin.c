/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 15:24:28 by flee              #+#    #+#             */
/*   Updated: 2021/06/08 16:15:20 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_strlen(char const *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*conca(int index, int cmpt

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		cmpt1;
	int		cmpt2;
	char	*str;
	int		index;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) - 1);
	cmpt1 = ft_strlen(s1);
	cmpt2 = cmpt1 + ft_strlen(s2);
	if (!str)
		return (NULL);
	while (index < cmpt1)
	{
		str[index] = s1[index];
		index++;
	}
	cmpt1 = 0;
	while (index < cmpt2)
	{
		str[index] = s2[cmpt1];
		index++;
		cmpt1++;
	}
	str[index] = '\0';
	return (str);
}
