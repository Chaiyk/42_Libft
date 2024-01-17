/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:56:59 by ychai             #+#    #+#             */
/*   Updated: 2024/01/02 18:47:36 by Steven           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>

int	ft_isalnum(char text)
{
	if ((text >= 'a' && text <= 'z')
		|| (text >= 'A' && text <= 'Z')
		|| (text >= '0' && text <= '9'))
		return (1);
	else
		return (0);
}
/*
int main ()
{
	char text;

	text = '!';
	printf("%d\n", isalnum(text));
	printf("%d\n", ft_isalnum(text));
}
*/
