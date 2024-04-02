/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:17:31 by ychai             #+#    #+#             */
/*   Updated: 2024/04/02 13:18:55 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, int len)
{
	char	*ptr;
	int		i;

	ptr = b;
	i = 0;
	while (i < len)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{

	char	var[] = "Hello World!!";
	printf("Before: %s\n", var);

	memset(var + 6, '*', 3);
	printf("Ori After: %s\n", var);

	ft_memset(var + 6, '-', 5); 
	printf("Own After: %s\n", var); 

}
*/
