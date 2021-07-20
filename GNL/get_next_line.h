/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 10:43:40 by flee              #+#    #+#             */
/*   Updated: 2021/07/20 14:27:33 by flee             ###   ########.fr       */
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
int		ft_strlen(const char *str);
size_t	ft_strlcpy(char *dest, const char *src, unsigned int size);
char	*ft_strjoin(char *s1, char const *s2, int read_return);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int		ft_strlen_n(char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_substrfree(char *s, unsigned int start, size_t len);
#endif
