/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 13:17:50 by ychai             #+#    #+#             */
/*   Updated: 2024/04/15 19:04:24 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*temp_dst;
	char	*temp_src;
	size_t	i;

	if (dst == NULL && src == NULL)
		return (NULL);
	if (&dst[0] < &src[0])
		return (ft_memcpy(dst, src, len));
	temp_dst = (char *)dst;
	temp_src = (char *)src;
	i = 0;
	while (len > 0)
	{
		temp_dst[len - 1] = temp_src[len - 1];
		len--;
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*rtn;
	char	*dst[0xF0];
	char	*src;
	size_t	size;

	printf("\n-----\nTest 1\n-----\n");
	bzero(dst, 0xF0);
	src = "Hello World!!";
	size = strlen(src);
	rtn = ft_memmove(dst, src, size);
	printf("Return: %s\n", rtn);

	printf("\n-----\nTest 2\n-----\n");
	bzero(dst, 0xF0);
	src = "Thanks to @apellicc for this test !\r\n";
	size = strlen(src);
	rtn = ft_memmove(dst, src, size);
	rtn = ft_memmove("", "" - 1, 0);
	printf("Return: %s\n", rtn);

	printf("\n-----\nTest 3\n-----\n");
	bzero(dst, 0xF0);
	src = "this is a good nyancat ! \r\n";
	size = strlen(src);
	rtn = ft_memmove(dst, src, size);
	printf("Return: %s\n", rtn);

	printf("\n-----\nTest 4\n-----\n");
	bzero(dst, 0xF0);
	src = "the cake is a lie !\0I'm hidden lol\r\n";
	size = strlen(src);
	rtn = ft_memmove(dst, src, 100);
	printf("Return: %s\n", rtn);
}
*/
