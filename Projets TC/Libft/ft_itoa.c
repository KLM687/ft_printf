/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesco <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 17:20:23 by cesco             #+#    #+#             */
/*   Updated: 2021/06/09 21:51:20 by cesco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_count(int nb)
{
	int index;
	
	index = 1;
	while (nb != 0)
	{
		index++;
		nb = nb / 10;
	}
	return (index);
}

char	*ft_reverse(int nb, char *tab, int index)
{
	tab[index] = '\0';
	index--;
	while (index >= 0 && nb != 0)
	{
		tab[index] = (nb % 10) + 48;
		nb = nb / 10;
		index--;
	}
	return (tab);
}
		
char		*ft_itoa(int nb)
{
	char	*tab;
	int	sign;
	int 	index;
	
	sign = 0;
	if (nb == -2147483648)
		return ("-2147483648");
	if (nb < 0)
	{
		sign = 1;
		nb = -nb;
	}
	index = ft_count(nb);
	tab = malloc(sizeof(char) * (index + sign));
	if (!tab)
		return (NULL);
	if (sign == 1)
		tab[0] = '-';
	else
		index = index - 1;
	tab = ft_reverse(nb, tab, index);
	return (tab);
}

int main (void)
{
	int nb= -454667800;
	char *tab;
	
	tab = ft_itoa(nb);
	printf("%s\n",tab);
}
