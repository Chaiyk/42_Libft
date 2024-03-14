/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:57:56 by ychai             #+#    #+#             */
/*   Updated: 2024/03/14 14:35:28 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcpy(char *dest, char *source, int length)
{
	int	i;

	i = 0;
	while (i != length)
	{
		dest[i] = source[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	char	text[] = "Hello World!!";
	char	textCpy[20];

	int	result = ft_strlcpy(textCpy, text, 5);

	printf("*Main Text: %s\nText Copyed: %s (Result: %d)\n"
		, text, textCpy, result);
}
*/
