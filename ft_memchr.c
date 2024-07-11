/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 08:46:02 by ychai             #+#    #+#             */
/*   Updated: 2024/04/16 17:18:03 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *str, int chr, int n)
{
	int		count;
	char	*temp_str;

	count = 0;
	temp_str = (char *)str;
	while (count < n)
	{
		if (((unsigned char)*temp_str) == (unsigned char)chr)
			return ((void *)temp_str);
		temp_str++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{

	char	strA[20] = "Hello World!";
	int		chr;
	int		i;
   
	chr = 'o';
	i = 3;
	printf("\nString: %s\nCharacter: %c\nNum: %d\n
	Ori Return: %s\nOwn Return: %s\n", strA, chr, i, 
	memchr(strA, chr, i), ft_memchr(strA, chr, i));

	chr = 'o';
	i = 5;
	printf("\nString: %s\nCharacter: %c\nNum: %d\n
	Ori Return: %s\nOwn Return: %s\n\n", strA, chr, i, 
	memchr(strA, chr, i), ft_memchr(strA, chr, i));

	char	strB[] = {0,1,2,3,4,5};
	chr = 2 + 256;
	i = 3;
	printf("\nString: %s\nCharacter: %c\nNum: %d\n
	Ori Return: %s\nOwn Return: %s\n\n", strA, chr, i, 
	memchr(strB, chr, i), ft_memchr(strB, chr, i));
}
*/
