/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:52:47 by ychai             #+#    #+#             */
/*   Updated: 2024/03/14 15:52:17 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(char *target, char *source, int num)
{
	while ((num > 0) && (source != 0))
	{
		*target = *source;
		target++;
		source++;
		num--;
	}
	return (target);
}
/*
#include <stdio.h>

int	main(void)
{
	char strA[20] = "Welcome";
	char strB[20];

	printf("Before:\nStrA: %s\nStrB: %s\n", strA, strB);
	
	ft_memcpy(strB, strA, 3);
	printf("\nAfter:\nStrA: %s\nStrB: %s\n", strA, strB);
}
*/
