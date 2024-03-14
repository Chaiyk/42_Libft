/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 12:06:23 by ychai             #+#    #+#             */
/*   Updated: 2024/03/14 14:43:18 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *str1, char *str2, int len)
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

int	main (void)
{
	char	str1[] = "Hello World";
	char	str2[] = "HEllo Earth";
	int		i;

	i = 1;
	printf("\nString 1: %s\nString 2: %s\nOri Return: %d\nOwn Return: %d\n"
		, str1, str2, strncmp(str1, str2, i), ft_strncmp(str1, str2, i));

	i = 5;
	printf("\nString 1: %s\nString 2: %s\nOri Return: %d\nOwn Return: %d\n"
		, str1, str2, strncmp(str1, str2, i), ft_strncmp(str1, str2, i));
}
*/
