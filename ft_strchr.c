/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 11:35:04 by ychai             #+#    #+#             */
/*   Updated: 2024/01/02 19:00:59 by Steven           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_strchr(char *str, int chr)
{
	int	count;

	count = 0;
	while (str[count] != chr)
	{
		if (str[count] == '\0')
			return (0);
		count++;
	}
	return (str + count);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str;
	int		chr;
	
	str = "Hello World!!";
	chr = 'o';
	printf("\nString: %s\nChracter: %c\nOri Return: %s\nOwn Return: %s\n"
		,str, chr, strchr(str, chr), ft_strchr(str, chr));

	chr = 'a';
	printf("\nString: %s\nChracter: %c\nOri Return: %s\nOwn Return: %s\n"
		,str, chr, strchr(str, chr), ft_strchr(str, chr));
}
*/
