/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <flee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 15:43:48 by flee              #+#    #+#             */
/*   Updated: 2021/06/04 16:02:09 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
	char *b;
	char *a;
	int index;

	b = (char *)dest;
	a = (char *)src;
	index = 0;

	while(index < n)
	{		
		b[index] = a[index];	
		index++;
	}
	return (b);
}

int main() {

    int array [] = { 54, 85, 20, 63, 21 };
    int * copy = NULL;
    int length = sizeof( int ) * 5;
       
    copy = (int *) malloc( length );
    ft_memcpy( copy, array, length );
        
    for( length=0; length<5; length++ ) {
        printf( "%d ", copy[ length ] );
    }
    printf( "\n" );
        
    free( copy );
    
    return (0);
}
