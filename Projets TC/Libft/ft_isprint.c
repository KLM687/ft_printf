/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 13:46:57 by flee              #+#    #+#             */
/*   Updated: 2021/06/07 13:52:22 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	ft_isprint(int character)
{
	if (character >= 32 && character <= 127)
		return (1);
	else
		return (0);
}
