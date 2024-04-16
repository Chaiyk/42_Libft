/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:07:17 by ychai             #+#    #+#             */
/*   Updated: 2024/04/16 17:30:21 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(char const *s, char const c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		len;
	size_t	arr_count;
	char	**arr;

	arr = (char **)malloc ((ft_count(s, c) + 1) * sizeof(char *));
	if (!s || arr == NULL)
		return (NULL);
	len = 0;
	arr_count = 0;
	while (*s)
	{
		while (*s == c && s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				len = ft_strlen(s);
			else
				len = ft_strchr(s, c) - s;
			arr[arr_count++] = ft_substr(s, 0, len);
			s += len;
		}
	}
	arr[arr_count] = NULL;
	return (arr);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s, c, **arr;
	int		i;

	s = "/He/ll/o /Wo/rl/d!/!";
	c = '/';
	i = 0;

	printf("\nStr: %s\nChr: %c\n\n", s, c);	
	arr = ft_split(s,c);


	while (arr[i])
	{
		printf("%d = %s\n", i, arr[i]);
		i++;
	}
	free (arr);


	s = "***What**Is*This**???***lol****";
	c = '*';
	i = 0;

	printf("\nStr: %s\nChr: %c\n\n", s, c);	
	arr = ft_split(s,c);
	while (arr[i])
	{
		printf("%d = %s\n", i, arr[i]);
		i++;
	}
	free (arr);
}
*/
