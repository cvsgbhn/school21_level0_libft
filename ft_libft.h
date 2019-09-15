/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libft.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 16:18:08 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/13 19:06:32 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H
# include <unistd.h>
# include <string.h>

void	*ft_memset(void *str, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *str1, const void *str2, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *adestination, const void *asource, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
int	ft_memcmp(const void *str1, const void *str2, size_t n );
int	ft_strlen(char *str);
char	*ft_strdup(char *src);
char	*ft_strcpy(char *destination, char *source);
char	*ft_strncpy(char *destination, char *source, int len);
char	*ft_strcat.c(char *destination, const char *const_src);
char	*ft_strcat(char *destination, const char *const_src, size_t number);
char	*ft_strlcat(char *destination, const char *const_src, size_t number);
const char	*ft_strchr(const char *string, int symbol);
char 	*ft_strrchr(const char *str, int symbol);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char *haystack, const char *needle, size_t h_length);
int	ft_strcmp(char *s1, char *s2);
int	ft_strncmp(char *s1, char *s2, int n);
//atoi
int	ft_isalpha(int character);
int	ft_isdigit(int character);
int	ft_isalnum(int character);
int	ft_isascii(int character);
int	ft_isprint(int character);
int	ft_toupper(int character);
int	ft_tolower(int character);

#endif
