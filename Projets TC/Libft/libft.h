/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 13:26:39 by flee              #+#    #+#             */
/*   Updated: 2021/06/08 15:24:06 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

void			*ft_memset(void *str, int c, size_t n);
void			*ft_bzero(void *str, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memccpy(void *restrict d, const void *restrict s,
					int c, size_t si);
void			*ft_memmove(void *dest, const void *src, size_t size);
void			*ft_memchr(const void *memoryBlock, int searchedChar,
					size_t size);
int				ft_memcmp(const void *pointer1, const void *pointer2,
					size_t size);
int				ft_strlen(char *str);
int				ft_isalpha(int character);
int				ft_isdigit(int character);
int				ft_isalnum(int character);
int				ft_isascii(int character);
int				ft_isprint(int character);
int				ft_toupper(int character);
int				ft_tolower(int character);
char			*ft_strchr(const char *hay, int needle);
char			*ft_strrchr(const char *hay, int needle);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcat(char *dst, char *src, unsigned int size);
char			*ft_strnstr(const char *haystack, const char *needle,
					size_t len);
int				ft_atoi(char *str);
void			*ft_calloc(size_t elementCount, size_t elementSize);
char			*ft_strdup(char *src);
char			*ft_substr(char const *src, unsigned int start, size_t len);
#endif
