/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 08:52:43 by ychai             #+#    #+#             */
/*   Updated: 2024/04/05 14:13:20 by Steven           ###   ########.fr       */
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
		//else if (main_str[main_count + match_count] != check_str[match_count])
		match_count = 0;
		main_count++;
	}
	return (0);
}

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
	printf("\nLen is: %d\nString to Check: %s\nOrt: %s \n Ret: %s\n"
		, i, check_str, strnstr(main_str, check_str, i), ft_strnstr(main_str, check_str, i));
}

