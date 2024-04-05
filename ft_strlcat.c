/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 11:29:35 by ychai             #+#    #+#             */
/*   Updated: 2024/04/05 13:56:25 by Steven           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dest, char *src, int len)
{
	int	dest_len;
	int	src_len;
	int	cpy_count;

	dest_len = 0;
	src_len = 0;
	cpy_count = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	while (cpy_count < len)
	{
		dest[dest_len + cpy_count] = src[cpy_count];
		cpy_count++;
	}
	dest[dest_len + cpy_count] = '\0';
	return (ft_strlen(dest) + ft_strlen(src));
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str;
	char	buff1[0xF00] = "Hello";
	char	buff2[0xF00] = "Hello";
	int		r1;
	int		r2;

	str = " World!";
	r1 = 0;
	r2 = 0;
	
	r1 = strlcat(buff1, str, 4);
	r2 = ft_strlcat(buff2, str, 4);
	printf("\n Ori: %s (Ret: %d) | Own: %s (Ret: %d)\n", buff1, r1, buff2, r2);

	str = "the cake is a lie !\0I'm hidden lol\r\n";
	strcpy(buff1, "there is no stars in the sky");
	strcpy(buff2, "there is no stars in the sky");

	r1 = strlcat(buff1, str, strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4);
	r2 = ft_strlcat(buff2, str, strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4);
	printf("\n Ori: %s (Ret: %d) | Own: %s (Ret: %d)\n", buff1, r1, buff2, r2);
}
*/
