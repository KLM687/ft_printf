/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 14:08:35 by flee              #+#    #+#             */
/*   Updated: 2021/06/07 14:10:02 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	ft_toupper(int character)
{
	if (character >= 'A' && character <= 'Z')
		 return ((unsigned char)character + 32);
	else if (character == -1)
		return (-1);
	else
		return ((unsigned char)character);
}
