/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 12:32:12 by ychai             #+#    #+#             */
/*   Updated: 2024/04/12 10:47:54 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *str1, const void *str2, int len)
{
	int			count;
	char const	*s1;
	char const	*s2;

	count = 0;
	s1 = str1;
	s2 = str2;
	if (len > 0 || s1[count] != s2[count])
	{
		while (count < len)
		{
			if (s2[count] != s1[count])
			{
				printf("Comparing: %hhu | %hhu\n", s1[count], s2[count]);
				return (s1[count] - s2[count]);
			}
			count++;
		}
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
	printf("String 1: %s\nString 2: %s\nCheck Length: %d\nOri Return: %d\nOwn Return: %d\n\n", str1, str2, i, memcmp(str1, str2, i), 
		ft_memcmp(str1, str2, i));

	i = 5;
	printf("String 1: %s\nString 2: %s\nCheck Length: %d\nOri Return: %d\nOwn Return: %d\n\n", str1, str2, i, memcmp(str1, str2, i), 
		ft_memcmp(str1, str2, i));

	int ret_i = 0;
	char *s1 = "\xff\xaa\xde\xffMACOSX\xff";
	char *s2 = "\xff\xaa\xde\x02";
	size_t size = 8;

	printf("\nMain Check: %d | %s | %s\n", ret_i, s1, s2);
	ret_i = ft_memcmp(s1, s2, size);	
	printf("Return: %d\n", ret_i);

	ret_i = 0;
	s1 = "atoms\0\0\0\0";
	s2 = "atoms\0abc";
	printf("\nMain Check: %d | %s | %s\n", ret_i, s1, s2);
	ret_i = ft_memcmp(s1, s2, size);
	printf("Return: %d\n", ret_i);

	ret_i = 0;
	s1 = "\xff\0\0\xaa\0\xde\xffMACOSX\xff";
	s2 = "\xff\0\0\xaa\0\xde\x00MBS";
	printf("\nMain Check: %d | %s | %s\n", ret_i, s1, s2);
	ret_i = ft_memcmp(s1, s2, size);
	printf("Return: %d\n", ret_i);


}
*/
