/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 10:49:26 by flee              #+#    #+#             */
/*   Updated: 2021/07/13 17:48:01 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen_n(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != '\n')
		i++;
	return (i);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (0);
	while(str[i] != '\0')
		i++;
	return (i);
}

int	ft_strlcpy(char *dest, char *src, int size)
{
	int				i;
	int				src_len;

	i = 0;
	src_len = 0;
	if (src == NULL)
		return (0);
	while (src[src_len])
		src_len++;
	if (size > 0)
	{
		while (src[i] && (i < (size - 1)))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}

char	*ft_strjoin(char *memory, char *s2)
{
	printf("ft_strjoin enter\n");
	int		cmpt1;
	int		cmpt2;
	char	*str;

	cmpt1 = ft_strlen((char *)memory);
	printf("cmpt1 = %d\n",cmpt1);
	cmpt2 = cmpt1 + ft_strlen_n((char *)s2);
	printf("cmpt2 = %d\n",cmpt2);
	str = (char *)malloc(sizeof(char) * (cmpt2 + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, (char *)memory, cmpt1 + 1);
	printf("str cpy = %s\n",str);
	ft_strlcat(str, (char *)s2, cmpt2 + 1);
	free(memory);
	printf("str cat = %s\n",str);
	return (str);
}

int	ft_strlcat(char *dst, char *src, int size)
{
	int	destlen;
	int	srclen;
	int	index;

	destlen = 0;
	srclen = ft_strlen(src);
	index = 0;
	if (dst != NULL)
	{
		while (dst[destlen] && destlen < size)
			destlen++;
	}
	while ((src[index]) && ((destlen + index + 1) < size))
	{
		dst[destlen + index] = src[index];
		index++;
	}
	return (destlen + srclen);
}
