/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Steven <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 23:54:32 by Steven            #+#    #+#             */
/*   Updated: 2024/01/02 18:46:28 by Steven           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(int num, int size)
{
	int	count;
	int	*temp_ptr;

	count = 1;
	while (count <= num)
	{
		temp_ptr = (int *) malloc (size);
		temp_ptr[count] = 0;
		count++;
	}
	return (temp_ptr);
}
/*
#include <stdio.h>

int	main(void)
{
	int*	ptr;
	int		count, size, i, x;
	
	count = 5;
	size = 10;
	
	printf("\nOri\n");
	ptr = (int*)calloc(count,size);
	
	for(i = 0;i < count;i++)
		ptr[i] = i + 10;

	for(x = 0; x < count; x++)
		printf("%d\n", ptr[x]);

	free(ptr);

	printf("\nOwn\n");	
	ptr = (int*)ft_calloc(count, size);

	for(i = 0;i < count;i++)
		ptr[i] = i + 10;

	for(x = 0; x < count; x++)
		printf("%d\n", ptr[x]);
	free(ptr);
}
*/
