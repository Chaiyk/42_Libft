/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:44:18 by ychai             #+#    #+#             */
/*   Updated: 2024/01/02 18:44:18 by Steven           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char str[])
{
	int	count;
	int	neg_num;
	int	ret_num;

	count = 0;
	neg_num = 1;
	ret_num = 0;
	while (str [count] != '\0')
	{
		if ((str[count] == '-') && (neg_num == 1))
			neg_num = -1;
		else if ((str [count] < '0' || str [count] > '9')
			&& (str[count] != ' ') && (str[count] != '	'))
			return (ret_num * neg_num);
		else if (str [count] >= '0' && str [count] <= '9')
			ret_num = ret_num * 10 + str [count] - '0';
		count++;
	}
	return (ret_num * neg_num);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*str;
	int		num;
	
	str = "  123abc456";
	num = atoi(str);
	printf("\nMain Str: %s \n\nOri Return: %d\n
		Own Return: %d\n\n", str, num, ft_atoi(str));

	str = "  -123abc456";
	num = atoi(str);
	printf("\nMain Str: %s \n\nOri Return: %d\n
		Own Return: %d\n\n", str, num, ft_atoi(str));

	str = "	123abc456";
	num = atoi(str);
	printf("\nMain Str: %s \n\nOri Return: %d\n
		Own Return: %d\n\n", str, num, ft_atoi(str));
}
*/
