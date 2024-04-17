/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:19:20 by ychai             #+#    #+#             */
/*   Updated: 2024/04/17 14:32:30 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t num, size_t size)
{
	void	*temp_ptr;

	if (num == 0 || size == 0)
	{
		num = 1;
		size = 1;
	}
	if (num > 0x7FFFFFFF / size)
		return (0);
	temp_ptr = (void *)malloc(num * size);
	if (temp_ptr)
		ft_bzero(temp_ptr, num * size);
	return (temp_ptr);
}
/*
int	main(void)
{
	char	*test;

	test = (char *)ft_calloc(0xFFFFFF,0xFFFFFF);
	printf("\n\nOwn Rtn: %s\n\n", test);
	free (test);
	test = (char *)calloc(0xFFFFFF,0xFFFFFF);
	printf("\n\nOri Rtn: %s\n\n", test);
	free (test);


	test = (char *)ft_calloc(-5, 5);
	printf("\nOwn Rtn: %s\n", test);
	free (test);
	test = (char *)calloc(-5, 5);
	printf("Ori Rtn: %s\n", test);
	free (test);


	test = (char *)ft_calloc(5, -5);
	printf("\nOwn Rtn: %s\n", test);
	free (test);
	test = (char *)calloc(5, -5);
	printf("Ori Rtn: %s\n", test);
	free (test);


	test = (char *)ft_calloc(-5, -5);
	printf("\nOwn Rtn: %s\n", test);
	free (test);
	test = (char *)calloc(-5, -5);
	printf("Ori Rtn: %s\n", test);
	free (test);


	test = (char *)ft_calloc(0, 0);
	printf("\nOwn Rtn: %s\n", test);
	free (test);
	test = (char *)calloc(0, 0);
	printf("Ori Rtn: %s\n", test);
	free (test);


}
*/
