/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:20:04 by ychai             #+#    #+#             */
/*   Updated: 2024/03/14 14:22:21 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		f(1, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>

void	f(unsigned int i, char* chr)
{
	printf("%s\n", chr);
	i++;
}


int main(void)
{
	char *s;

	s = "abcdefg";
	printf("\nString: %s\n", s);
	ft_striteri(s, *f);
	printf("Return: %s\n", s);
}
*/
