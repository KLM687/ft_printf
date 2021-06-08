/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 14:02:21 by flee              #+#    #+#             */
/*   Updated: 2021/06/07 14:08:16 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int 	ft_toupper(int character)
{
	if (character >= 'a' && character <= 'z')
		return ((unsigned char)character - 32);
	else if (character == -1)
		return (-1);
	else
		return ((unsigned char)character);
}
