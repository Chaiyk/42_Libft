/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:58:19 by ychai             #+#    #+#             */
/*   Updated: 2024/01/02 18:48:14 by Steven           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	a;
	int		count;

	count = 0;
	a = 0;
	while (count != 130)
	{
		printf("char: %c --- Ori Return: %d | Own Return: %d\n"
			, a, isascii(a), ft_isascii(a));
		count ++;
		a++;
	}
}
*/
