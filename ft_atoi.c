/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:44:18 by ychai             #+#    #+#             */
/*   Updated: 2024/04/15 19:25:38 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	count;
	int	rtn_num;
	int	neg_num;

	count = 0;
	rtn_num = 0;
	neg_num = 1;
	while (str[count] == '\t' || str[count] == '\v' || str[count] == '\f' 
			|| str[count] == '\r' || str[count] == ' ' || str[count] == '\n')
		count++;
	if (str[count] == '-')
		neg_num = -1;
	if (str[count] == '-' || str[count] == '+')
		count++;
	while (str[count] >= '0' && str[count] <= '9')
	{
		rtn_num = rtn_num * 10 + str[count] - '0';
		count++;
	}
	return (rtn_num * neg_num);
}

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*str;
	int		num;
	
	str = "  123abc456";
	num = atoi(str);
	printf("\nMain Str: %s \n\nOri Return: %d\nOwn Return: %d\n\n",
	str, num, ft_atoi(str));

	str = "  -123abc456";
	num = atoi(str);
	printf("\nMain Str: %s \n\nOri Return: %d\nOwn Return: %d\n\n",
	str, num, ft_atoi(str));

	str = "	123abc456";
	num = atoi(str);
	printf("\nMain Str: %s \n\nOri Return: %d\nOwn Return: %d\n\n",
	str, num, ft_atoi(str));

	str = "\t\v\f\r\n \f-06050";
	num = atoi(str);
	printf("\nMain Str: %s \n\nOri Return: %d\nOwn Return: %d\n\n",
	str, num, ft_atoi(str));

	str = "+1234";
	num = atoi(str);
	printf("\nMain Str: %s \n\nOri Return: %d\nOwn Return: %d\n\n",
	str, num, ft_atoi(str));

	str = "\e06050";
	num = atoi(str);
	printf("\nMain Str: %s \n\nOri Return: %d\nOwn Return: %d\n\n",
	str, num, ft_atoi(str));

	str = "\t\v\f\r\n \f+\t\v\f\r\n \f1234";
	num = atoi(str);
	printf("\nMain Str: %s \n\nOri Return: %d\nOwn Return: %d\n\n",
	str, num, ft_atoi(str));

	char	*strB = "\e06050";
	num = atoi(strB);
	printf("\nMain Str: %s \n\nOri Return: %d\nOwn Return: %d\n\n",
	strB, num, ft_atoi(strB));

}
