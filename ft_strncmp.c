/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 12:06:23 by ychai             #+#    #+#             */
/*   Updated: 2024/04/05 12:37:03 by Steven           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char const *str1, char const *str2, int len)
{
	int	count;

	count = 0;
	while (count < len && str1[count] != '\0' && str2[count] != '\0')
	{
		//printf("--Comparing: %c = %d | %c = %d\n", str1[count], str1[count], str2[count], str2[count]);
		if (str1[count] != str2[count])
			return (str1[count] - str2[count]);
		count++;
	}
	
	//printf("--Comparing: %c = %d | %c = %d\n", str1[count], str1[count], str2[count], str2[count]);
	if (count < len && (str1[count] != '\0' || str2[count] != '\0'))
		return (str1[count] - str2[count]);
	else
		return (0);
}

#include <stdio.h>
#include <string.h>

int	main (void)
{
	char	*str1 = "Hello World";
	char	*str2 = "HEllo Earth";
	int		i;

	i = 1;
	printf("\nString 1: %s\nString 2: %s\nLen: %d\nOri Return: %d\nOwn Return: %d\n"
		, str1, str2, i, strncmp(str1, str2, i), ft_strncmp(str1, str2, i));

	i = 5;
	printf("\nString 1: %s\nString 2: %s\nLen: %d\nOri Return: %d\nOwn Return: %d\n"
		, str1, str2, i, strncmp(str1, str2, i), ft_strncmp(str1, str2, i));

	str1 = "\200";
	str2 = "\0";
	i = 1;
	printf("\nString 1: %s\nString 2: %s\nLen: %d\nOri Return: %d\nOwn Return: %d\n"
		, str1, str2, i, strncmp(str1, str2, i), ft_strncmp(str1, str2, i));

	str1 = "atoms\0\0\0\0";
	str2 = "atoms\0abc";
	i = 8;
	printf("\nString 1: %s\nString 2: %s\nLen: %d\nOri Return: %d\nOwn Return: %d\n"
		, str1, str2, i, strncmp(str1, str2, i), ft_strncmp(str1, str2, i));

	str1 = "\x12\xff\x65\x12\xbd\xde\xad";
	str2 = "\x12\x02";
	i = 6;
	printf("\nString 1: %s\nString 2: %s\nLen: %d\nOri Return: %d\nOwn Return: %d\n"
		, str1, str2, i, strncmp(str1, str2, i), ft_strncmp(str1, str2, i));
}

