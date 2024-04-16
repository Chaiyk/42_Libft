/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:22:38 by ychai             #+#    #+#             */
/*   Updated: 2024/04/16 20:05:47 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*temp_str;
	unsigned int	main_count;
	unsigned int	sub_count;

	temp_str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (temp_str == NULL)
		return (NULL);
	main_count = 0;
	sub_count = 0;
	while (s1[sub_count] != '\0')
	{
		temp_str[main_count] = s1[sub_count];
		main_count++;
		sub_count++;
	}
	sub_count = 0;
	while (s2[sub_count] != '\0')
	{
		temp_str[main_count] = s2[sub_count];
		main_count++;
		sub_count++;
	}
	temp_str[main_count] = '\0';
	return (temp_str);
}
/*
#include <stdio.h>

int	main(void)
{
	const char	*str1, *str2, *str3;

	str1 = "Hello ";
	str2 = "World!!";

	printf("\nString 1: %s\nString 2: %s\n", str1, str2);
	printf("Return: %s\n", ft_strjoin(str1, str2));

	str1 = "my favorite animal is";
	str2 = " ";
	str3 = "the nyancat";
	printf("\nStr 1: %s\nStr 2: %s\nStr 3: %s\n", str1, str2, str3);
	printf("Return: %s\n", ft_strjoin(ft_strjoin(str1, str2), str3));
}
*/
