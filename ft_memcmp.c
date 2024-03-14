/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 12:32:12 by ychai             #+#    #+#             */
/*   Updated: 2024/03/14 13:45:31 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const char *str1, const char *str2, int len)
{
	int	count;

	count = 0;
	while (count < len)
	{
		if (str1[count] != str2[count])
			return (str1[count] - str2[count]);
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
}
*/
