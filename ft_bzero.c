/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:51:19 by ychai             #+#    #+#             */
/*   Updated: 2024/03/14 13:23:04 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *ptr, int i)
{
	while (i > 0)
	{
		*ptr = '\0';
		ptr++;
		i--;
	}
}
/*
#include <stdio.h>
#include <strings.h>

int	main(void)
{
	char	var[] = "Hello World!!";

	printf("%s\n", var);
	
	ft_bzero(var + 5, 6);
	printf("%s\n", var);
}
*/
