/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:57:37 by ychai             #+#    #+#             */
/*   Updated: 2024/04/15 18:53:40 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int text)
{
	if (text < 0)
		return (0);
	if (text >= 65 && text <= 90)
		return (1);
	else if ((text >= 97 && text <= 122))
		return (2);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	a;

	a = 0;
	while (a <= 530)
	{
		printf("char: %c = %d | Ori: %d | Return: %d\n"
			, a, a, isalpha(a), ft_isalpha(a));
		a++;
	}
}
*/
