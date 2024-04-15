/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 08:52:43 by ychai             #+#    #+#             */
/*   Updated: 2024/04/15 19:01:09 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *main, const char *set, size_t len)
{
	size_t	i;
	size_t	match;
	size_t	set_len;

	i = 0;
	match = 0;
	set_len = ft_strlen(set);
	if (!set || len == 0)
		return ((char *) main);
	while (main[i] != '\0' && (i + match) < len)
	{
		if (match == set_len)
			return ((char *)main + i);
		else if (main[i + match] == set [match])
			match++;
		else
		{
			match = 0;
			i++;
		}
	}
	if (match == set_len)
		return ((char *)main + i);
	else
		return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*main_str;
	char	*check_str;
	int		i;

	main_str = "Hello World!!";
	printf("\n*Main String: %s\n", main_str);

	i = 5;
	check_str = "llo";
	printf("\nLen is: %d\nString to Check: %s\nReturn: %s\n"
		, i, check_str, ft_strnstr(main_str, check_str, i));

	check_str = "Wor";
	printf("\nLen is: %d\nString to Check: %s\nReturn: %s\n"
		, i, check_str, ft_strnstr(main_str, check_str, i));

	check_str = "all";
	printf("\nLen is: %d\nString to Check: %s\nReturn: %s\n"
		, i, check_str, ft_strnstr(main_str, check_str, i));

	i = 2;
	check_str = "llo";
	printf("\nLen is: %d\nString to Check: %s\nReturn: %s\n"
		, i, check_str, ft_strnstr(main_str, check_str, i));


	main_str = "MZIRIBMZIRIBMZE123";
	printf("\n*Main String: %s\n", main_str);

	check_str = "MZIRIBMZE";
	i = strlen(check_str);
	printf("\nLen is: %d\nString to Check: %s\nOri: %s \nRet: %s\n"
		, i, check_str, strnstr(main_str, check_str, i), 
		ft_strnstr(main_str, check_str, i));

	main_str = "AAAAAAAAAAAAAA";
	printf("\n*Main String: %s\n", main_str);
	
	i = strlen(main_str);
	printf("\nLen is: %d\nString to Check: %s\nOri: %s \nRet: %s\n"
		, i, check_str, strnstr(main_str, main_str, i), 
		ft_strnstr(main_str, main_str, i));


}
*/
