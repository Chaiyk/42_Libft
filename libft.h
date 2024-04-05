/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:23:15 by ychai             #+#    #+#             */
/*   Updated: 2024/04/02 14:22:26 by ychai            ###   ########.fr       */
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
void	*ft_memmove(char *dest, char *source, int num);
int		ft_strlcpy(char *dest, char *source, int length);
int		ft_strlcat(char *dest, char *src, int len);
void	ft_toupper(char str[]);
void	ft_tolower(char str[]);
void	ft_strchr(char *str, int chr);
void	ft_strrchr(char *str, int chr);
int		ft_strncmp(char *str1, char *str2, int len);
void	*ft_memchr(char *str, int chr, int n);
int		ft_memcmp(const void *str1, const void *str2, int len);
char	*ft_strnstr(char *main_str, char *check_str, int len);
int		ft_atoi(char str[]);
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
