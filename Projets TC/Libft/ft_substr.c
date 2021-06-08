/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 11:06:16 by flee              #+#    #+#             */
/*   Updated: 2021/06/08 14:34:32 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{


int main (void)
{
	char tab[] = "francispetaintotoro";
	char *tab2;
	tab2 = ft_substr(tab, 0, 50);
	printf("%s\n",tab2);
}
