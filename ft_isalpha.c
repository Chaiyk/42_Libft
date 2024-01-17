/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:57:37 by ychai             #+#    #+#             */
/*   Updated: 2023/12/01 09:13:35 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>

int	ft_isalpha(char text)
{
	if ((text >= 97 && text <= 122) || (text >= 65 && text <= 90))
		return (1);
	else
		return (0);
}
/*
int	main(int argc, char *argv[])
{
	if(argc == 2)
	{
		printf("%d\n", isalpha(*argv[1]));
		printf("%d\n", ft_isalpha(*argv[1]));
	}
	else
		printf("please input one only");
}
*/
