/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 11:32:46 by ychai             #+#    #+#             */
/*   Updated: 2024/04/05 11:55:18 by Steven           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	int	i;

	i = c;
	if (i >= 97 && i <= 122)
		i -= 32;
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
		if (toupper(i) == ft_toupper(i))
			printf("Char: %c = %d | Ori: %d | Ret: %d\n", i, i, toupper(i), ft_toupper(i));
		else
			printf("******\nChar: %c = %d | Ori: %d | Ret: %d\n******", i, i, toupper(i), ft_toupper(i));
		i++;
	}
}
*/
