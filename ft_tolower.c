/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 11:33:44 by ychai             #+#    #+#             */
/*   Updated: 2024/03/14 15:12:55 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_tolower(char str[])
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ123456";

	printf("Before: %s\n", str);
	ft_tolower(str);
	printf("After: %s\n", str);
}
*/
