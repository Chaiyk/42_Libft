/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 11:33:44 by ychai             #+#    #+#             */
/*   Updated: 2024/04/15 19:03:28 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	int	i;

	i = c;
	if (i >= 65 && i <= 90)
		i += 32;
	return (i);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	i;

	i = -1;

	while (i < 256)
	{
		if (tolower(i) == ft_tolower(i))
			printf("Char: %c = %d | Ori: %d | 
Ret: %d\n", i, i, tolower(i), ft_tolower(i));
		else
			printf("*****\nChar: %c = %d | Ori: %d | 
Ret: %d\n*****\n", i, i, tolower(i), ft_tolower(i));
		i++;
	}
}
*/
