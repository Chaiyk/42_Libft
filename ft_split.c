/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Steven <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:13:12 by Steven            #+#    #+#             */
/*   Updated: 2024/01/02 19:00:01 by Steven           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>

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
		if (s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

char	*ft_strndup(char const *s, size_t i)
{
	size_t	count;
	char	*temp_str;

	count = 0;
	temp_str = malloc(sizeof(s) * (i + 1));
	while (s[count] && count < i)
	{
		temp_str[count] = s[count];
		count++;
	}
	temp_str[count] = '\0';
	return (temp_str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		first_chr;
	int		match;
	int		arr_count;
	char	**arr;

	i = 0;
	first_chr = 0;
	arr_count = 0;
	arr = malloc (sizeof(s) * (ft_count(s, c) + 1));
	first_chr ++;
	if (arr == 0)
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		match = i;
		while (s[i] != c && s[i])
			i++;
		arr[arr_count] = (ft_strndup(s + match, i - match));
		arr_count ++;
	}
	return (arr);
}
/*
#include <stdio.h>

int	main(void)
{
	char *s, c, **arr;

	s = "/He/ll/o /Wo/rl/d!/!";
	c = '/';

	printf("\nThe String is %s and Character is %c\n", s, c);	
	arr = ft_split(s,c);

	for (int i = 0; i < 7; i++)
		printf("%d = %s\n", i, arr[i]);
	free (arr);

	s = "***What**Is*This**???***lol****";
	c = '*';
	printf("\nThe String is %s and Character is %c\n", s, c);	
	
	arr = ft_split(s, c);

	for (int i = 0; i < 5; i++)
		printf("%d = %s\n", i, arr[i]);
	free(arr);
}
*/
