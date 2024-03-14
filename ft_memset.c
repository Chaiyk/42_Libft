/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:17:31 by ychai             #+#    #+#             */
/*   Updated: 2024/03/14 13:55:51 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_memset(char *ptr, int text, int i)
{
	while (i > 0)
	{
		*ptr = text;
		ptr++;
		i--;
	}
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
