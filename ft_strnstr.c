/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 08:52:43 by ychai             #+#    #+#             */
/*   Updated: 2024/03/14 14:44:57 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(char *main_str, char *check_str, int len)
{
	int	main_count;
	int	match_count;

	main_count = 0;
	match_count = 0;
	while (main_count < len && main_str[main_count] != '\0')
	{
		while (main_str[main_count + match_count] == check_str[match_count])
			match_count++;
		if (check_str[match_count] == '\0')
			return (main_str + main_count);
		else if (main_str[main_count + match_count] == '\0')
			return (0);
		else if (main_str[main_count + match_count] != check_str[match_count])
			match_count = 0;
		main_count++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	main_str[] = "Hello World!!";
	char	*check_str;
	int		i;

	printf("\n*Main String: %s\n", main_str);

	i = 5;
	check_str = "llo";
	printf("\nLen is: %d\nString to Check: %s\nReturn: %s\n"
		, i, check_str, ft_strnstr(main_str, check_str, i));

	i = 5;
	check_str = "Wor";
	printf("\nLen is: %d\nString to Check: %s\nReturn: %s\n"
		, i, check_str, ft_strnstr(main_str, check_str, i));

	i = 5;
	check_str = "all";
	printf("\nLen is: %d\nString to Check: %s\nReturn: %s\n"
		, i, check_str, ft_strnstr(main_str, check_str, i));

	i = 2;
	check_str = "llo";
	printf("\nLen is: %d\nString to Check: %s\nReturn: %s\n"
		, i, check_str, ft_strnstr(main_str, check_str, i));
}
*/
