/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:35:10 by ychai             #+#    #+#             */
/*   Updated: 2024/04/16 17:22:22 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_digit_count(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
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
	char	*str;

	digit_count = ft_digit_count(n);
	str = (char *)malloc(sizeof(char) * digit_count + 1);
	if (str == 0)
		return (0);
	str[digit_count--] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n < 0)
		str[0] = '-';
	while (n != 0)
	{
		if (str[0] == '-')
			str[digit_count] = '0' + -(n % 10);
		else
			str[digit_count] = '0' + (n % 10);
		digit_count--;
		n /= 10;
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
	printf("\nNumber: %d\nReturn: %s\n",
   	num1, string);
	free(string);

	num1 = -123;
	string = ft_itoa(num1);
	printf("\nNumber: %d\nReturn: %s\n",
   	num1, string);
	free(string);

	num1 = 0;
	string = ft_itoa(num1);
	printf("\nNumber: %d\nReturn: %s\n",
   	num1, string);
	free(string);

	num1 = 42;

	string = ft_itoa(num1);
	printf("\nNumber: %d\nReturn: %s\n",
   	num1, string);
	free(string);

}
*/
