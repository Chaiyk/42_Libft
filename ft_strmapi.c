/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:38:10 by ychai             #+#    #+#             */
/*   Updated: 2024/04/17 16:01:43 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		x;
	char	*str;

	if (!s || !f)
		return (0);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str == 0)
		return (0);
	x = 0;
	while (s[x])
	{
		str[x] = f(x, s[x]);
		x++;
	}
	str[x] = 0;
	return (str);
}
/*
char f(unsigned int n, char c)
{
	char	chr;

	n = 1;
	chr = c + n;
	return (chr);
}

#include <stdio.h>

int	main (void)
{
	char	*str;
	char	*ret;

	str = "abcde123";
	ret = ft_strmapi(str, *f);
	printf("\nString: %s\nReturn: %s\n", str, ret);
	free (ret);

	ret = ft_strmapi(NULL, *f);
	printf("\nString: %s\nReturn: %s\n", str, ret);
	free (ret);

	ret = ft_strmapi(str, NULL);
	printf("\nString: %s\nReturn: %s\n", str, ret);
	free (ret);

	ret = ft_strmapi(NULL, NULL);
	printf("\nString: %s\nReturn: %s\n", str, ret);
	free (ret);
}
*/
