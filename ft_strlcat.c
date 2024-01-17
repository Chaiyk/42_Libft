/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 11:29:35 by ychai             #+#    #+#             */
/*   Updated: 2024/01/03 12:53:18 by Steven           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	dest[cpy_count] = '\0';
	return (dest_len + src_len);
}
/*
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char	src[] = " World!";
	char	dest[13] = "Hello";

	int	result = ft_strlcat(dest, src, 4);

	printf("Result: %d\nCopy Strings: %s\n", result, dest);
}
*/
