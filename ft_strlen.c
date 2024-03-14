/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:14:34 by ychai             #+#    #+#             */
/*   Updated: 2024/03/14 14:37:49 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long int	ft_strlen(char const *str)
{
	long int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *text;

	text = "test";
	printf("Ori: %ld\n", strlen(text));
	printf("Own: %ld\n", ft_strlen(text));
}
*/
