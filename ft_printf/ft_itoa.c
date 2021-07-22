/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 13:04:56 by flee              #+#    #+#             */
/*   Updated: 2021/07/22 13:09:52 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count(int nb)
{
	int	index;

	index = 1;
	while (nb != 0)
	{
		index++;
		nb = nb / 10;
	}
	return (index);
}

int	*ft_reverse(int nb, char *tab, int index)
{
	tab[index] = '\0';
	index--;
	while (index >= 0 && nb != 0)
	{
		tab[index] = (nb % 10) + 48;
		nb = nb / 10;
		index--;
	}
	nb = ft_putstr(tab);
	free(tab);
	return (nb);
}

int	*ft_itoa(int nb)
{
	char	*tab;
	int		sign;
	int		index;

	if (nb == 0)
		return (ft_strdup("0"));
	sign = 0;
	if (nb == -2147483648)
		return (tab = ft_strdup("-2147483648"));
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
	nb = ft_reverse(nb, tab, index);
	return (nb);
}
