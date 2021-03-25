/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 12:00:47 by flee              #+#    #+#             */
/*   Updated: 2021/03/24 12:00:50 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char **str, int size)
{
    int i;
    int j;
    int cpt;

    cpt = 0;
    i = 0;
    while(i < size)
    {
        j = 0;
        while(str[i][j])
        {
            j++;
            cpt++;
        }
        i++;
    }
    return (cpt);
}

int ft_strlen1(char *sep)
{
    int i;

    i = 0;
    while (sep[i])
        i++;
    return (i);
}

char ft_concat_all(char *tab, char **strs, char *sep)
{
    int i;
    int j;
    int a;

    i = 0;
    a = 0;
    while(strs[i])
    {
        j = 0;
        while(strs[i][j])
            {   
                tab[a] = strs[i][j];
                j++;
                a += j;
            }      
        j = 0;
        while(sep[j])
        {
            tab[a] = sep[j];
            j++;
            a += j;
        }
        i++;
    }
    return (tab);

}


char *ft_strjoin(int size, char **strs, char *sep)
{
    int *tab;
    char sizemalloc;


    sizemalloc = ft_strlen(strs, size) + (ft_strlen1(sep) * (size - 1)) +1;
    tab = malloc(sizeof(char) * (sizemalloc));
    tab = ft_concat_all(tab, strs, sep);
    return (tab);


}
int		main()
{   
    int size = 3;
    char sep[3] = "lol";
    char **strs;
    char *tab;

    strs[0] = "mdr";
    strs[1] = "mdr";
    strs[2] = "mdr";
    for (int i = 0 ; i <13 ; i++)
        printf("%c",tab[i]);
    printf("\n");
}