/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 11:32:46 by ychai             #+#    #+#             */
/*   Updated: 2024/01/03 13:21:32 by Steven           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_toupper(char str[])
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "abcdefghijklmnopqrstuvwxyz123456";

	printf("Before: %s\n" , str);
	ft_toupper(str);
	printf("After: %s\n", str);
}
*/
