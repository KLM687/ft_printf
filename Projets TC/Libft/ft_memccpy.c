/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <flee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 16:00:59 by flee              #+#    #+#             */
/*   Updated: 2021/06/04 16:28:48 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void * ft_memccpy( void * restrict dest, const void * restrict source, int ch, size_t maxsize )
{
	char *a;
	char *b;
	int index;

	a = (char *)source;
	b = (char *)dest;
	index = 0;
	
	while(index < maxsize)
	{
		b[index] = a[index];
		if((unsigned char)b[index] == (unsigned char)ch)
		{
			return((char *)b + index + 1);
		}
		index++;
	}
	return(NULL);
}


int main() {

    const char * text = "Ceci est ma première phrase. Et ceci est ma seconde";
    size_t length = strlen( text );

    // On essaye de trouver la première phrase dans le texte.
    char firstSentence[ length ];
    char * res = ft_memccpy( firstSentence, text, '.', length );

    // On affiche le resultat.
    if ( res != NULL ) {
        printf( "Une phrase entière a été trouvée.\n" );
        printf( "\t%s\n", firstSentence );
    } else {
        printf( "Aucune phrase entière trouvée.\n" );
    }

    return 0;
}
