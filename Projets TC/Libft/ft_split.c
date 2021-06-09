/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 12:03:56 by flee              #+#    #+#             */
/*   Updated: 2021/06/09 14:13:14 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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

char	**ft_split(char *str, char sep)
{
	int		index;
	int		i;
	int		words;
	char	**memorytab;
	int		cmpt;

	words = ft_count_word(str, sep);
	memorytab = (char **)malloc(sizeof(char *) * words + 1);
	index = 0;
	cmpt = 0;
	while (index < words)
	{
		while (str[cmpt] != '\0' && str[cmpt] == sep)
			cmpt++;
		memorytab[index] = malloc(sizeof(char) * 
				ft_sizeof_word(&str[cmpt], sep) + 1);
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

int     main(void)
{
        char **memory;
		char str[] = "afrancaesacoia";
		char sep = 'a';
		int i = 0;

        memory = ft_split(str, sep);
		while (memory[i] != '\0')
		{
			printf("%s\n",memory[i]);
			i++;
		}

}
