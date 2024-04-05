/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:15:09 by ychai             #+#    #+#             */
/*   Updated: 2024/04/05 11:45:25 by Steven           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int text)
{
	if (text >= 48 && text <= 57)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c;

	c = -1;
	while (c <= 530)
	{
		printf("Char: %c = %d | Ori: %d | Ret: %d\n", c, c, isdigit(c), ft_isdigit(c));
		c++;
	}
}
*/
