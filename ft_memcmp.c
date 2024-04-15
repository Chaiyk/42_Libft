/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 12:32:12 by ychai             #+#    #+#             */
/*   Updated: 2024/04/15 18:55:36 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, int len)
{
	int		count;
	char	*s1;
	char	*s2;

	count = 0;
	s1 = (char *)str1;
	s2 = (char *)str2;
	while (count < len)
	{
		if (s2[count] != s1[count])
		{
			return ((unsigned char)s1[count] - (unsigned char)s2[count]);
		}
		count++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{

	char*	str1;
	char*	str2;
	int		i;
	
	str1 = "Hello World!!";
	str2 = "Hello Earth!!";
	i = 13;
	printf("String 1: %s\nString 2: %s\nCheck Length: %d\nOri Return: %d\n
		Own Return: %d\n\n", str1, str2, i, memcmp(str1, str2, i), 
		ft_memcmp(str1, str2, i));

	i = 5;
	printf("String 1: %s\nString 2: %s\nCheck Length: %d\nOri Return: %d\n
		Own Return: %d\n\n", str1, str2, i, memcmp(str1, str2, i), 
		ft_memcmp(str1, str2, i));

	int ret_i = 0;
	char *s1 = "\xff\xaa\xde\xffMACOSX\xff";
	char *s2 = "\xff\xaa\xde\x02";
	size_t size = 8;
}
*/
