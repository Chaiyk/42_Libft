/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:50:19 by ychai             #+#    #+#             */
/*   Updated: 2024/04/15 19:03:07 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_own_memcpy(char *dest, char const *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	ft_backcheck(char *temp_str, char const *set)
{
	int	str_count;
	int	set_count;
	int	max;

	str_count = ft_strlen(temp_str);
	set_count = ft_strlen(set);
	max = str_count;
	while (temp_str[str_count] == set[set_count])
	{
		str_count--;
		set_count--;
	}
	while (temp_str[str_count] < 33 || temp_str[str_count] == 127)
	{
		if (str_count == max && temp_str[str_count] == set[set_count])
			set_count--;
		str_count--;
	}
	temp_str[str_count + 1] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		match_count;
	char	*temp_str;

	match_count = 0;
	temp_str = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (temp_str == NULL)
		return (NULL);
	while (s1[match_count] == set[match_count])
		match_count++;
	while (s1[match_count] < 33 || s1[match_count] == 127)
	{
		match_count++;
	}
	ft_own_memcpy(temp_str, s1 + match_count);
	ft_backcheck(temp_str, set);
	return (temp_str);
}
/*
#include <stdio.h>

int	main(void)
{
	const char	*string, *set;

	string = "42Hello World!!42";
	set = "42";

	printf("\n-----\nCheck 1\n-----\nString: %s\nSet: %s\n
Return: %s\n\n", string, set, ft_strtrim(string, set));

	string = "42Hello World!!";
	printf("-----\nCheck 2\n-----\nString: %s\nSet: %s\n
Return: %s\n\n", string, set, ft_strtrim(string, set));

	string = "Hello World!!42";
	printf("-----\nCheck 3\n-----\nString: %s\nSet: %s\n
Return: %s\n\n", string, set, ft_strtrim(string, set));

	string = "Hello World!!";
	printf("-----\nCheck 4\n-----\nString: %s\nSet: %s\n
Return: %s\n\n", string, set, ft_strtrim(string, set));

	set = "";
	string = "42Hello World!!42";
	printf("-----\nCheck 5\n-----\nString: %s\nSet: %s\n
Return: %s\n\n", string, set, ft_strtrim(string, set));

	set = "Hello \t  Please\n Trim me !";
	string = "   \t  \n\n \t\t  \n\n\nHello \t
  	Please\n Trim me !\n   \n \n \t\t\n  ";
	printf("-----\nCheck 6\n-----\nString: %s\nSet: %s\n
Return: %s\n\n", string, set, ft_strtrim(string, set));

	set = " \n\t";
	string = "      \n    \n\n\n\t";
	printf("-----\nCheck 7\n-----\nString: %s\nSet: %s\n
Return: %s\n\n", string, set, ft_strtrim(string, set));


}
*/
