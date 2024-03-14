/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 13:17:50 by ychai             #+#    #+#             */
/*   Updated: 2024/03/14 13:49:23 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(char *dest, char *source, int num)
{
	char	temp[50];
	int		i;

	i = 0;
	while (source[i] != '\0')
	{
		temp[i] = source[i];
		i++;
	}
	i = 0;
	while (i != num)
	{
		dest[i] = temp[i];
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	main[] = "Hello~";
	char	scr[20] = "World!";
	char	dest[20] = "Hello~";
	int		i;

	i = 2;
	printf("\n*Source: %s\n*Dest: %s\n*Num: %d\n", scr, dest, i);
	printf("\nOri\nBefore: %s\n", dest);
	memmove(dest, scr, i);	
	printf("After: %s\n", dest);

	memcpy(dest, main, 6);
	printf("\nOwn\nBefore: %s\n", dest);
	ft_memmove(dest, scr, i);	
	printf("After: %s\n\n", dest);
}
*/
