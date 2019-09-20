/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libft.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 16:18:08 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/20 17:40:54 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <string.h>
# include <stdlib.h>

void		*ft_memset(void *str, int c, size_t n);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *str1, const void *str2, size_t n);
void		*ft_memccpy(void *dst, const void *src, int c, size_t n);
void		*ft_memmove(void *adestination, const void *asource, size_t n);
void		*ft_memchr(const void *str, int c, size_t n);
int			ft_memcmp(const void *str1, const void *str2, size_t n);
size_t		ft_strlen(const char *str);
char		*ft_strdup(const char *src);
char		*ft_strcpy(char *destination, const char *source);
char		*ft_strncpy(char *destination, const char *source, size_t len);
char		*ft_strcat(char *destination, const char *const_src);
char		*ft_strncat(char *dest, const char *const_src, size_t number);
size_t		*ft_strlcat(char *dest, const char *const_src, size_t number);
const char	*ft_strchr(const char *string, int symbol);
char		*ft_strrchr(const char *str, int symbol);
char		*ft_strstr(const char *haystack, const char *needle);
char		*ft_strnstr(const char *hstck, const char *ndl, size_t h_length);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			ft_atoi(const char *str);
int			ft_isalpha(int character);
int			ft_isdigit(int character);
int			ft_isalnum(int character);
int			ft_isascii(int character);
int			ft_isprint(int character);
int			ft_toupper(int character);
int			ft_tolower(int character);
void		ft_putchar(char c);
void		ft_putstr(char *str);
void		*ft_memalloc(size_t size);
void		ft_memdel(void **ap);
char		*ft_strnew(size_t size);
void		ft_strdel(char **as);
void		ft_strclr(char *s);
void		ft_striter(char *s, void (*f)(char *));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
char		*ft_strmap(char const *s, char (*f)(char));
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int			ft_strequ(char const *s1, char const *s2);
int			ft_strnequ(char const *s1, char const *s2, size_t n);
char		*ft_strsub(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s);
char		**ft_strsplit(char const *s, char c);
char		*ft_itoa(int n);
void		ft_putendl(char const *s);
void		ft_putnbr(int nb);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *str, int fd);
void		ft_putendl(char const *s);
void		ft_putendl_fd(char const *s, int fd);
void		ft_putnbr_fd(int nb, int fd);
int			set_flag(int n);
char		*write_to_char(char *number, int n, int decimal, int count_size);
void		check_for_min(int nb);
void		check_for_min_fd(int nb, int fd);
int			ft_count_words(char const *s, char c);
int			ft_count_chars(char const *s, char c);
int			ft_count_whitespaces(char const *s);
#endif
