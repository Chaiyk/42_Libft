/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 12:01:05 by ychai             #+#    #+#             */
/*   Updated: 2024/04/05 12:12:04 by Steven           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(char *str, int chr)
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

	if (chr == '\0')
		temp = str + count;

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
	printf("\nString: %s\nCharacter: %c\nOri Return: %s\nOwn Return: %s\n\n", str, chr, strrchr(str, chr), ft_strrchr(str,chr));

	chr = 'o';
	printf("\nString: %s\nCharacter: %c\nOri Return: %s\nOwn Return: %s\n\n", str, chr, strrchr(str, chr), ft_strrchr(str,chr));


	str = "Testing \0 in \0this \0string";

	chr = '\0';
	printf("\nString: %s\nCharacter: %c\nOri Return: %s\nOwn Return: %s\n\n", str, chr, strrchr(str, chr), ft_strrchr(str,chr));
}
*/
