/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 13:17:50 by ychai             #+#    #+#             */
/*   Updated: 2024/04/03 13:05:14 by Steven           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(char *dest, char *source, int num)
{
	char	temp[0xFFFF];
	int		i;

	i = 0;
	while (source[i] != '\0')
	{
		temp[i] = source[i];
		i++;
	}
	temp[i] = '\0';
	printf("1 - temp in func: %s | source: %s |\n", temp, source);
	i = 0;
	while (i <= num)
	{
		printf("cpying: %s\n", dest);
		dest[i] = temp[i];
		i++;
	}
	dest[i] = temp[i];
	printf("end: %s\n", dest);
	return (dest);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
/*
	char	main[] = "Hello~";
	char	scr[20] = "World!";
	char	dest[20] = "Hell~";
	int		i;

	i = 2;
	printf("\n*Source: %s\n*Dest: %s\n*Num: %d\n", scr, dest, i);
	printf("\nOri\nBefore: %s\n", dest);
	memmove(dest, scr, i);	
	printf("After: %s\n", dest);

	memcpy(dest, main, 6);
	i = 5;
	printf("\nOwn 1\nBefore: %s\n", dest);
	ft_memmove(dest, scr, i);	
	printf("After: %s\n\n", dest);

	memcpy(dest, main, 10);
	printf("\nOwn 2\nBefore: %s\n", dest);
	ft_memmove(dest + 2, dest, i);	
	printf("After: %s\n\n", dest);
*/
	char	*src2 = "\r\nM";
	char	*src1 = "Thanks to @apellicc for this test !\r\n";
	char	dst1[0xF0];
	int	size = strlen(src1);
	char *rtn = ft_memmove(dst1, src1, size);

	printf("Test: %s\n", src2);
	printf("Return: %s\n", rtn);
}

