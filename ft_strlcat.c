/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 11:29:35 by ychai             #+#    #+#             */
/*   Updated: 2024/04/15 19:23:03 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	count;
	size_t	rtn_num;

	if (dst == NULL && dstsize == 0)
		return (ft_strlen(src));
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	count = 0;
	if (dstsize <= len_dst)
		return (dstsize + ft_strlen(src));
	else
	{
		rtn_num = len_dst + len_src;
		while ((char) src[count] != '\0' && len_dst + 1 < dstsize)
		{
			dst[len_dst] = src[count];
			len_dst++;
			count++;
		}
		dst[len_dst] = '\0';
	}
	return (rtn_num);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str;
	char	own[0xF00];
	char	ori[0xF00];
	size_t	size;
	size_t	r1;
	size_t	r2;

	str = " World!!";
	strcpy(own, "Hello");
	strcpy(ori, "Hello");
	size = 14;

	r1 = strlcat(ori, str, size);
	r2 = ft_strlcat(own, str, size);
	printf("\nOri: %s (Rtn: %zu)\n", ori, r1);
	printf("Own: %s (Rtn: %zu)\n", own, r2);

	strcpy(own, "Hello");
	strcpy(ori, "Hello"); 
	size = 3;

	r1 = strlcat(ori, str, size);
	r2 = ft_strlcat(own, str, size);
	printf("\nOri: %s (Rtn: %zu)\n", ori, r1);
	printf("Own: %s (Rtn: %zu)\n", own, r2);

	str = "the cake is a lie !\0I'm hidden lol\r\n";

	strcpy(own, "there is no stars in the sky");
	strcpy(ori, "there is no stars in the sky");
	size = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;

	r1 = strlcat(ori, str, size);
	r2 = ft_strlcat(own, str, size);
	printf("\nOri: %s (Rtn: %zu)\n", ori, r1);
	printf("Own: %s (Rtn: %zu)\n", own, r2);

	str = "nyan !";

	r1 = strlcat(((void *)0), str, 0);
	r2 = ft_strlcat(((void *)0), str, 0);
	printf("\nOri Rtn: %zu\n", r1);
	printf("Own Rtn: %zu\n", r2);

}
*/
