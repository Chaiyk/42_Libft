/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 08:46:02 by ychai             #+#    #+#             */
/*   Updated: 2024/01/02 18:51:01 by Steven           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(char *str, int chr, int n)
{
	int		count;
	char	*temp_str;

	count = 0;
	temp_str = str;
	while (count < n && temp_str[count] != '\0')
	{
		if (temp_str[count] == chr)
			return (str + count);
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
	int		chr;
	int		i;
   
	chr = 'o';
	i = 3;
	printf("\nString: %s\nCharacter: %c\nNum: %d\n
		Ori Return: %s\nOwn Return: %s\n",\
		   	strA, chr, i, memchr(strA, chr, i), ft_memchr(strA, chr, i));

	chr = 'o';
	i = 5;
	printf("\nString: %s\nCharacter: %c\nNum: %d\n
		Ori Return: %s\nOwn Return: %s\n\n",\
		   	strA, chr, i, memchr(strA, chr, i), ft_memchr(strA, chr, i));
}
*/
