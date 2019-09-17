/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libft.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 16:18:08 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/17 16:10:52 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H
# include <unistd.h>
# include <string.h>
# include <stdlib.h>

void	*ft_memset(void *str, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *str1, const void *str2, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *adestination, const void *asource, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *src);
char	*ft_strcpy(char *destination, const char *source);
char	*ft_strncpy(char *destination, const char *source, size_t len);
char	*ft_strcat(char *destination, const char *const_src);
char	*ft_strncat(char *destination, const char *const_src, size_t number);
size_t	*ft_strlcat(char *destination, const char *const_src, size_t number);
const char	*ft_strchr(const char *string, int symbol);
char 	*ft_strrchr(const char *str, int symbol);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char *haystack, const char *needle, size_t h_length);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int     ft_atoi(const char *str);
int		ft_isalpha(int character);
int		ft_isdigit(int character);
int		ft_isalnum(int character);
int		ft_isascii(int character);
int		ft_isprint(int character);
int		ft_toupper(int character);
int		ft_tolower(int character);
void	ft_putchar(char c);
void	ft_putstr(char *str);

#endif
