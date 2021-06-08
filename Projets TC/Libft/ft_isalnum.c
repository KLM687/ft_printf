/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 12:21:14 by flee              #+#    #+#             */
/*   Updated: 2021/06/07 12:28:35 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	isalnum(int character)
{
	if (character >= 'a' && character <= 'z')
		return (1);
	else if (character >= 'A' && character <= 'Z')
		return (1);
	else if (character >= 0 && character <= 9)
		return (1);
	else
		return (0);
}
