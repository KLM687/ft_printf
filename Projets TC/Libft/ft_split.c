/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 12:03:56 by flee              #+#    #+#             */
/*   Updated: 2021/06/09 17:19:24 by cesco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sizeof_word(char *str, char sep)
{
	int		size;

	size = 0;
	while (str[size] != '\0' && str[size] != sep)
		size++;
	return (size);
}

int	ft_count_word(char *str, char sep)
{
	int	words;
	int	state;
	int	index;

	words = 0;
	state = 1;
	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] == sep)
			state = 1;
		else
		{
			if (state == 1)
				words++;
			state = 0;
		}
		index++;
	}
	return (words);
}

char	**ft_tabcreation(int words, char *str,
		char sep, char **memorytab)
{
	int	i;
	int	index;
	int	cmpt;

	cmpt = 0;
	index = 0;
	while (index < words)
	{
		while (str[cmpt] != '\0' && str[cmpt] == sep)
			cmpt++;
		memorytab[index] = malloc(sizeof(char)
				* ft_sizeof_word(&str[cmpt], sep) + 1);
		if (!memorytab)
			return (NULL);
		i = 0;
		while (str[cmpt] != '\0' && str[cmpt] != sep)
		{
			memorytab[index][i++] = str[cmpt];
			cmpt++;
		}
		memorytab[index][i] = '\0';
		index++;
	}
	memorytab[index] = NULL;
	return (memorytab);
}

char	**ft_split(char *str, char sep)
{
	int		words;
	char	**memorytab;

	words = ft_count_word(str, sep);
	memorytab = (char **)malloc(sizeof(char *) * words + 1);
	if (!memorytab)
		return (NULL);
	memorytab = ft_tabcreation(words, str, sep, memorytab);
	return (memorytab);
}
