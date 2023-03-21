/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinhyeonho <sinhyeonho@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:12:59 by sinhyeonho        #+#    #+#             */
/*   Updated: 2023/03/20 17:38:47 by sinhyeonho       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

int				ft_isalpha(int c); //clear
int				ft_isdigit(int c); //clear
int				ft_isalnum(int c); //clear
int				ft_isascii(int c); //clear
int				ft_isprint(int c); //clear

int				ft_strlen(const char *s); //clear
void			*ft_memset(void *b, int c, size_t len); //clear
void			ft_bzero(void *s, size_t size); //clear
void			*ft_memcpy(void *restrict dst, const void *restrict src, size_t n); //clear
void			*ft_memmove(void *dst, const void *src, size_t len); //clear
size_t			ft_strlcpy(char *restrict dest, const char *restrict src, size_t size); //clear
size_t			ft_strlcat(char *restrict dest, const char *restrict src, size_t size); //clear
int				ft_strncmp(const char *s1, const char *s2, size_t n);

int				ft_toupper(int c); //clear
int				ft_tolower(int c); //clear
char			*ft_strchr(const char *s, int c); //clear
char			*ft_strrchr(const char *s, int c); //clear

void			*ft_memchr(const void *s, int c, size_t n); //clear
int				ft_memcmp(const void *s1, const void *s2, size_t n); //clear
char			*ft_strnstr(const char *haystack, const char *needle, size_t len); //clear
int				ft_atoi(const char *str); //clear

void			*ft_calloc(size_t count, size_t size); //clear
char			*ft_strdup(const char *src); //clear

char			*ft_substr(char const *s, unsigned int start, size_t len); //clear
char			*ft_strjoin(char const *s1, char const *s2); //clear
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c); //clear
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));

void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);

#endif