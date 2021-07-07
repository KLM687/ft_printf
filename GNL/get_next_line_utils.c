/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 10:49:26 by flee              #+#    #+#             */
/*   Updated: 2021/07/07 11:58:54 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen (char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strlen_to_n (char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0' || str[i] != '\n')
		i++;
	return (i);
}

int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				src_len;

	i = 0;
	src_len = 0;
	if (src)
	{
		while (src[src_len])
			src_len++;
		if (size > 0)
		{
			while (src[i] != '\0' && (i < size))
			{
				dest[i] = src[i];
				i++;
			}
		}
	}
	return (src_len);
}

int	ft_strlcat(char *dst, char *src, unsigned int size)
{
	size_t	destlen;
	size_t	srclen;
	size_t	index;

	destlen = 0;
	srclen = ft_strlen(src);
	index = 0;
	while (dst[destlen] && destlen < size)
		destlen++;
	while ((src[index]) && ((destlen + index + 1) < size))
	{
		dst[destlen + index] = src[index];
		index++;
	}
	if (destlen != size)
		dst[destlen + index] = '\0';
	return (destlen + srclen);
}
