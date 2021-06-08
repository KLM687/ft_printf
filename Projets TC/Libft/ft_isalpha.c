/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 11:37:08 by flee              #+#    #+#             */
/*   Updated: 2021/06/07 13:42:02 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int 	ft_isalpha(int character)
{
	if (character >= 'a' && character <= 'z')
		return (1);
	else if (character >= 'A' && character <= 'Z')
		return (1);
	else
		return (0);
}
