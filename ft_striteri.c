/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:20:04 by ychai             #+#    #+#             */
/*   Updated: 2024/04/16 17:14:23 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>

void	f(unsigned int i, char *chr)
{
	printf("Running");
	*chr += i;
}

int main(void)
{
	char *s;

	s = "";
	printf("\nString: %s\n", s);
	ft_striteri(s, f);
	printf("Return: %s\n", s);

	s = "0";
	printf("\nString: %s\n", s);
	ft_striteri(s, f);
	printf("Return: %s\n", s);

	s = "0000000000";
	printf("\nString: %s\n", s);
	ft_striteri(s, f);
	printf("Return: %s\n", s);
}
*/
