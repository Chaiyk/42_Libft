/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:05:49 by ychai             #+#    #+#             */
/*   Updated: 2024/04/05 15:56:21 by Steven           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *c, int fd)
{
	int	i;

	i = 0;
	while (c[i])
	{
		ft_putchar_fd(c[i], fd);
		i++;
	}
}
/*
int     main(void)
{
	char *str;

	str = "Hello World!";
	ft_putstr_fd(str, 1);

	write(1, "\n", 1);

	str = "What Is This???";
	ft_putstr_fd(str, 1);
}
*/
