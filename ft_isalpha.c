/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:57:37 by ychai             #+#    #+#             */
/*   Updated: 2024/03/14 13:31:35 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char text)
{
	if ((text >= 97 && text <= 122) || (text >= 65 && text <= 90))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(int argc, char *argv[])
{
	if(argc == 2)
	{
		printf("%d\n", isalpha(*argv[1]));
		printf("%d\n", ft_isalpha(*argv[1]));
	}
	else if (argc == 1)
		printf("Kindly input something\n");
	else
		printf("please enter one input only\n");
}
*/
