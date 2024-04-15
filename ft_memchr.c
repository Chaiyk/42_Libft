/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 08:46:02 by ychai             #+#    #+#             */
/*   Updated: 2024/04/15 19:08:52 by ychai            ###   ########.fr       */
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
		if (temp_str[count] == chr)
			return (temp_str + count);
		count++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{

	char	strA[20] = "Hello World!";
	char	*strB;
	int		chr;
	int		i;
   
	chr = 'o';
	i = 3;
	printf("\nString: %s\nCharacter: %c\nNum: %d\nOri Return: %s\n
		Own Return: %s\n",\	strA, chr, i, 
		memchr(strA, chr, i), ft_memchr(strA, chr, i));

	chr = 'o';
	i = 5;
	printf("\nString: %s\nCharacter: %c\nNum: %d\nOri Return: %s\n
		Own Return: %s\n\n",\strA, chr, i, 
		memchr(strA, chr, i), ft_memchr(strA, chr, i));

	strB = "/|\x12\xff\x09\0\x42\042\0\42|\\";
	chr = '\0';
	i = 12;
	printf("\nString: %s\nCharacter: %c\nNum: %d\nOri Return: %s\n
		Own Return: %s\n\n",\strA, chr, i, 
		memchr(strA, chr, i), ft_memchr(strA, chr, i));
}
*/
