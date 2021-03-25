/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 08:53:53 by flee              #+#    #+#             */
/*   Updated: 2021/03/24 08:53:57 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
    int *tab;
    int i;
    int size;

    i = 0;    
    size = (max - min);
    if ( min >= max)
    {
        return (0);
    }
    tab = (int*)malloc(sizeof(*tab) * (size));
    while (i < size) 
    {
        tab[i] = min;
        min++;
        i++;
    }
    return (tab);
}   

int main ()
{
    int *tab;
    int i = 0;
    int max = 10;
    int min = -10;
    int size = max - min;

    tab = ft_range(-10, 10);
    for (i = 0; i < size ; i++)
    {
        printf("%d ",tab[i]);
    }
}