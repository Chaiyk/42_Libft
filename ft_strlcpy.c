/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:57:56 by ychai             #+#    #+#             */
/*   Updated: 2024/04/05 13:13:40 by Steven           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dest, char *source, int length)
{
	int	i;

	i = 0;
	while (i != length && source[i] != '\0')
	{
		dest[i] = source[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(source));
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str;
	char	buff[0xF00];

	int	result;

	str = "Hello World!!";
	result = ft_strlcpy(buff, str, 5);
	printf("\nMain: %s\nBuff: %s (Result: %d)\n"
		, str, buff, result);

	ft_bzero(buff, sizeof(buff));
	result = 0;

	str = "the cake is a lie !\0I'm hidden lol\r\n";
	result = ft_strlcpy(buff, str, sizeof(buff));
	printf("\nMain: %s\nBuff: %s (Result: %d)\n"
		, str, buff, result);

	ft_bzero(buff, sizeof(buff));
	result = 0;

	str = "BBBB";
	result = ft_strlcpy(buff, str, sizeof(buff));
	printf("\nMain: %s\nBuff: %s (Result: %d)\n"
		, str, buff, result);

	ft_bzero(buff, sizeof(buff));
	result = 0;

	str = "hello !";
	result = ft_strlcpy(buff, str, 2);
	printf("\nMain: %s\nBuff: %s (Result: %d)\n"
		, str, buff, result);

	ft_bzero(buff, sizeof(buff));
	result = 0;

	str = "";
	result = ft_strlcpy(buff, str, sizeof(buff));
	printf("\nMain: %s\nBuff: %s (Result: %d)\n"
		, str, buff, result);

	ft_bzero(buff, sizeof(buff));
	result = 0;

	str = "BBBB";
	result = ft_strlcpy(buff, str, 0);
	printf("\nMain: %s\nBuff: %s (Result: %d)\n"
		, str, buff, result);
}
*/
