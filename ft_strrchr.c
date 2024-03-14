/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 12:01:05 by ychai             #+#    #+#             */
/*   Updated: 2024/03/14 15:22:13 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_strrchr(char *str, int chr)
{
	int		count;
	char	*temp;

	count = 0;
	temp = 0;
	while (str[count] != '\0')
	{
		if (str[count] == chr)
			temp = str + count;
		count++;
	}
	if (temp == 0)
		return (0);
	else
		return (temp);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char*	str;
	int 	chr;
	
	str = "Hello World!!";
	chr = 'a';
	printf("\nString: %s\nCharacter: %c\nOri Return: %s\n
	Own Return: %s\n\n", str, chr, strrchr(str, chr), ft_strrchr(str,chr));
	chr = 'o';
	printf("\nString: %s\nCharacter: %c\nOri Return: %s\n
	Own Return: %s\n\n", str, chr, strrchr(str, chr), ft_strrchr(str,chr));
}
*/
