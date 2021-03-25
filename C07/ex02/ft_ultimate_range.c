/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 10:04:41 by flee              #+#    #+#             */
/*   Updated: 2021/03/24 10:04:44 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include <stdio.h>

int     ft_ultimate_range(int **range, int min, int max)
{
    int i;
    int size;

    i = 0;    
    size = (max - min);
    if ( min >= max)
    {   
        *range = NULL;
        return (0);
    }
    if(!(*range = malloc(sizeof(int) * size)))
        return (-1);
    while (i < size) 
    {
        (*range)[i] = min;
        min++;
        i++;
    }
    return (size - 1);
}   

int main ()
{
    int *range_1 = NULL;
    int **range = &range_1;
    int i = 0;
    int max = 0;
    int min = 0;
    int size = max - min;
    ft_ultimate_range(range, min, max);
    printf("%d ",ft_ultimate_range(range, min, max));
}