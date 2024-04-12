/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 13:17:50 by ychai             #+#    #+#             */
/*   Updated: 2024/04/12 12:55:43 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	printf("\n--Getting--\nDst: %s | Src: %s | Len: %zu\n", dst, src, len);
	unsigned int	i;
	char			*temp_dst;
	const char		*temp_src[0xFFFF];

	i = 0;
	temp_dst = dst;

	if (src == 0 || len == 0)
		return(dst);

	while ((const char *)src != 0 && i < len)
	{
		printf("%d - %d = %c\n", i, (const char)src, (const char)src);
		temp_src[i] = src;
		src++;
		i++;
	}
	//printf("Yes:: %s\n", temp_src);
/*
	while (temp_src[i] != 0 && i < len)
	{
		printf("Copying: %d = %c\n", *temp_src, *temp_src);
		temp_dst = temp_src;
		temp_dst++;
		temp_src++;
		i++;
	}
*/
	return (dst);
}

void	*old_ft_memmove(char *dest, char *source, int num)
{
	char	temp[0xFFFF];
	int		i;

	i = 0;
	if (source == 0 || num == 0)
		return (dest);
	while (source[i] != '\0')
	{
		temp[i] = source[i];
		i++;
	}
	temp[i] = '\0';
	i = 0;
	while (i <= num)
	{
		dest[i] = temp[i];
		i++;
	}
	dest[i] = temp[i];
	return (dest);
}

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
}

