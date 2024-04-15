/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:52:47 by ychai             #+#    #+#             */
/*   Updated: 2024/04/15 18:56:48 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *target, const char *source, int num)
{
	char	*ptr;
	int		i;

	ptr = target;
	i = 0;
	if (source != NULL || target != NULL)
	{
		while (i < num)
		{
			ptr[i] = source[i];
			i++;
		}
	}
	return (target);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char strA[20] = "Welcome";
	char strB[20];

	printf("Before:\nStrA: %s\nStrB: %s\n", strA, strB);
	
	ft_memcpy(strB, strA, 3);
	printf("\nAfter:\nStrA: %s\nStrB: %s\n", strA, strB);
}
*/
