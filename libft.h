/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 23:57:09 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/18 15:07:39 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

//--------------------------------Part 1--------------------------------------//
// **ctype.h**
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
// **string.h**
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(const char *str);
char	*ft_strnstr(const char *haystack, const char *needle, size_t n);
char	*ft_strrchr(const char *str, int c);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
size_t	ft_strlcat(char *dest, const char *src, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t n);
size_t	ft_strlen(const char *str);
void	ft_bzero(void *str, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *str, int c, size_t n);
// **stdlib.h**
int		ft_atoi(const char *str);
void	*ft_calloc(size_t nitems, size_t size);

//--------------------------------Part 2--------------------------------------//

char	*ft_itoa(int n);
char	*ft_strjoin(char const *str1, char const *str2);
char	*ft_strmapi(char const *str, char (*f)(unsigned int, char));
char	*ft_strtrim(const char *str, const char *charset);
char	*ft_substr(char const *str, unsigned int start, size_t n);
char	**ft_split(const char *str, char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *str, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_striteri(char *str, void (*f)(unsigned int, char*));

#endif