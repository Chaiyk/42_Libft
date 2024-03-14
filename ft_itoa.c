/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:35:10 by ychai             #+#    #+#             */
/*   Updated: 2024/03/14 15:21:18 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_digit_count(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		digit_count;
	int		neg;
	char	*str;

	neg = 0;
	digit_count = ft_digit_count(n);
	if (n < 0)
	{
		digit_count++;
		neg = 1;
		n *= -1;
	}
	str = (char *)malloc(sizeof(char) * (digit_count + 1 + neg));
	if (str == 0)
		return (0);
	str[digit_count] = '\0';
	while (digit_count > 0)
	{
		digit_count--;
		str[digit_count] = (n % 10) + 48;
		n /= 10;
		if (neg == 1)
			str[0] = 45;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	int		num1;
	char	*string;

	num1 = 123;
	string = ft_itoa(num1);
	printf("\nNumber: %d\nReturn: %s\n", num1, string);
	free(string);

	num1 = -123;
	string = ft_itoa(num1);
	printf("\nNumber: %d\nReturn: %s\n", num1, string);
	free(string);

	num1 = 0;
	string = ft_itoa(num1);
	printf("\nNumber: %d\nReturn: %s\n", num1, string);
	free(string);
}
*/
