/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:57:56 by ychai             #+#    #+#             */
/*   Updated: 2024/04/15 15:23:23 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dst, char const *source, int length)
{
	int	i;
	int	src_len;

	i = 0;
	src_len = ft_strlen(source);
	if (length <= 0)
		return (src_len);
	while (i < length - 1 && *source != '\0')
	{
		dst[i] = *source;
		i++;
		source++;
	}
	dst[i] = '\0';
	return (src_len);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str;
	char	buff[0xF00];
	char	buff2[0xF00];
	int	result;

	str = "Hello World!!";
	result = ft_strlcpy(buff, str, 5);
	printf("\nMain: %s\nOwn: %s (Result: %d)\n"
		, str, buff, result);
	result = strlcpy(buff2, str, 5);
	printf("Ori: %s (Result: %d)\n"
		, buff2, result);

	ft_bzero(buff, sizeof(buff));
	ft_bzero(buff2, sizeof(buff2));
	result = 0;

	str = "the cake is a lie !\0I'm hidden lol\r\n";
	result = ft_strlcpy(buff, str, sizeof(buff));
	printf("\nMain: %s\nOwn: %s (Result: %d)\n"
		, str, buff, result);
	result = strlcpy(buff2, str, sizeof(buff2));
	printf("Ori: %s (Result: %d)\n"
		, buff2, result);

	ft_bzero(buff, sizeof(buff));
	ft_bzero(buff2, sizeof(buff2));
	result = 0;

	str = "hello !";
	result = ft_strlcpy(buff, str, 2);
	printf("\nMain: %s\nOwn: %s (Result: %d)\n"
		, str, buff, result);
	result = strlcpy(buff2, str, 2);
	printf("Ori: %s (Result: %d)\n"
		, buff2, result);

	ft_bzero(buff, sizeof(buff));
	ft_bzero(buff2, sizeof(buff2));
	result = 0;

	str = "";
	result = ft_strlcpy(buff, str, sizeof(buff));
	printf("\nMain: %s\nOwn: %s (Result: %d)\n"
		, str, buff, result);
	result = strlcpy(buff2, str, sizeof(buff2));
	printf("Ori: %s (Result: %d)\n"
		, buff2, result);

	ft_bzero(buff, sizeof(buff));
	ft_bzero(buff2, sizeof(buff2));
	result = 0;

	str = "BBBB";
	result = ft_strlcpy(buff, str, sizeof(buff));
	printf("\nMain: %s\nOwn: %s (Result: %d)\n"
		, str, buff, result);
	result = strlcpy(buff2, str, 5);
	printf("Ori: %s (Result: %d)\n"
		, buff2, result);

	ft_bzero(buff, sizeof(buff));
	ft_bzero(buff2, sizeof(buff2));
	result = 0;

	result = ft_strlcpy(buff, str, 0);
	printf("\nMain: %s\nOwn: %s (Result: %d)\n"
		, str, buff, result);
	result = strlcpy(buff2, str, 0);
	printf("Ori: %s (Result: %d)\n"
		, buff2, result);
}
*/
