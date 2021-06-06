/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <flee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 16:30:21 by flee              #+#    #+#             */
/*   Updated: 2021/06/06 21:25:43 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *memmove(void *dest, const void *src, size_t size)
{
	char *a;
	char *b;
	char *tmp;
	int index;

	a = (char *)src;
	b = (char *)dest;
	tmp = NULL;
	index = 0;

	while(index < size)
	{
		tmp[index] = src[index];



