/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 10:43:40 by flee              #+#    #+#             */
/*   Updated: 2021/07/13 16:48:45 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>

char	*get_next_line(int fd);
int		ft_strlen(char *str);
int		ft_strlcpy(char *dest, char *src, int size);
char	*ft_strjoin(char *memory, char *s2);
int		ft_strlcat(char *dst, char *src, int size);
int		ft_strlen_n(char *str);

#endif
