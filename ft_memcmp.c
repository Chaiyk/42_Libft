/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 12:32:12 by ychai             #+#    #+#             */
/*   Updated: 2024/04/02 15:12:46 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const char *str1, const char *str2, int len)
{
	int	count;
	int	ret;

	count = 0;
	ret = 0;
	while (count < len)
	{
		if (str1[count] != str2[count])
		{
			ret = str1[count] - str2[count];
			if (ret < 0)
				ret *= -1;
			return (ret);
		}
		count++;
	}
	return (ret);
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
	printf("String 1: %s\nString 2: %s\nCheck Length: %d\nOri Return: %d\nOwn Return: %d\n\n", str1, str2, i, memcmp(str1, str2, i), 
		ft_memcmp(str1, str2, i));

	i = 5;
	printf("String 1: %s\nString 2: %s\nCheck Length: %d\nOri Return: %d\nOwn Return: %d\n\n", str1, str2, i, memcmp(str1, str2, i), 
		ft_memcmp(str1, str2, i));

	char *s1 = "\xff\xaa\xde\xffMACOSX\xff";
	char *s2 = "\xff\xaa\xde\x02";
	size_t size = 8;

	printf("Main: %s\n", s1);
	int ret_i = ft_memcmp(s1, s2, size);
	printf("Return: %d\n", ret_i);
}
*/
