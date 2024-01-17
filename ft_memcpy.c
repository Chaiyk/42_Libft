/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:52:47 by ychai             #+#    #+#             */
/*   Updated: 2024/01/02 18:53:15 by Steven           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_memcpy(char *target, char *source, int num)
{
	while (num > 0)
	{
		*target = *source;
		target++;
		source++;
		num--;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	char strA[20] = "Hello World!!";
	char strB[20] = "Welcome!!";

	printf("Before:\nStrA: %s\nStrB: %s\n", strA, strB);
	
	ft_memcpy(strB, strA, 6);
	printf("\nAfter:\nStrA: %s\nStrB: %s", strA, strB);
}
*/
