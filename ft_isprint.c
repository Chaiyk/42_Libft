/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 09:54:03 by ychai             #+#    #+#             */
/*   Updated: 2024/01/02 18:49:01 by Steven           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c > 31 && c <= 126)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main (void)
{
	int a;

	a = 0;
	while(a != 130)
	{
		printf("Character: %c, %d - Ori Return: %d  |  Own Return: %d\n"
			, a, a, isprint(a), ft_isprint(a));
		a++;
	}
}
*/
