/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 12:10:19 by flee              #+#    #+#             */
/*   Updated: 2021/08/10 15:58:31 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>

int			ft_arg_u(int nb);
int			ft_arg_x(int nb, char rail);
int			ft_arg_p(unsigned long nb);
int			ft_printf(const char *, ...);
int			ft_putstr(char *str);
int			ft_putchar(char c);
size_t			ft_strlcpy(char *dest, const char *src, unsigned int size);
int			ft_putnbr(int n, int set);
int			ft_printf(const char *argc, ...);

#endif
