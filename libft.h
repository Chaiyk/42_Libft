/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:23:15 by ychai             #+#    #+#             */
/*   Updated: 2024/04/15 17:53:09 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		ft_isalpha(char text);
int		ft_isdigit(char text);
int		ft_isalnum(char text);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_strlen(char const *str);
void	*ft_memset(void *b, int c, int len);
void	ft_bzero(void *ptr, int i);
void	*ft_memcpy(void *target, const char *source, int num);
void	*ft_memmove(void *det, const void *src, size_t len);
int		ft_strlcpy(char *dst, const char *source, int length);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
void	ft_toupper(char str[]);
void	ft_tolower(char str[]);
void	ft_strchr(char *str, int chr);
void	ft_strrchr(char *str, int chr);
int		ft_strncmp(char const *str1, char const *str2, int len);
void	*ft_memchr(const void *str, int chr, int n);
int		ft_memcmp(const void *str1, const void *str2, int len);
char	*ft_strnstr(const char *main, const char *set, size_t len);
int		ft_atoi(const char *str);
char	*ft_strdup(char *str);
void	*ft_calloc(int num, int size);
char	*ft_strdup(char *str);
char	*ft_substr(char const *s, unsigned int start, int len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
