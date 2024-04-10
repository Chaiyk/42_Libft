/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:50:19 by ychai             #+#    #+#             */
/*   Updated: 2024/04/09 17:01:14 by Steven           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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

void	ft_backcheck(char *temp_str, char const *set,
		int str_count, int set_count)
{
	int	const	max;

	str_count = ft_strlen(temp_str);
	set_count = ft_strlen(set);
	max = str_count;

	printf("Counter str: %d\n", str_count);
	printf("Counter set: %d\n", set_count);

	while (temp_str[str_count] == set[set_count] || 
		temp_str[str_count] < 33 || temp_str[str_count == 127])
	{
		if (str_count == max && temp_str[str_count] == set[set_count])
			set_count--;
		str_count--;
	}

/*
	if (set[set_count] == '\0')
	{
		if (temp_str[str_count] == '\0')
			temp_str[str_count - set_count] = '\0';
	}
*/
}
/*
char	*ft_strtrim(char const *s1, char const *set)
{
	int		str_count;
	int		set_count;
	//char	*str;
	char	*temp_str;

	str_count = 0;
	set_count = 0;
	//str = s1;
	temp_str = (char *) malloc (sizeof (s1));
	while (s1[set_count] == set[set_count] || s1[set_count] < 33 || s1[set_count] == 127)
	{
		printf("Checking: %c = %d\n", s1[set_count], s1[set_count]);
		set_count++;
	}
	printf("Done First Part: %c = %d | Num: %d\n", s1[set_count], s1[set_count], set_count);
	if (set[set_count] == '\0')
	{
		printf("Copying: %c = %d\n", s1[set_count], s1[set_count]);
		ft_own_memcpy(temp_str, s1[set_count]);
	}
	else
		ft_own_memcpy(temp_str, s1);
	while (temp_str[str_count] != '\0')
	{
		if (temp_str[str_count] == set[set_count])
			set_count++;
		else
			set_count = 0;
		str_count++;
	}
	ft_backcheck(temp_str, set, str_count, set_count);
	printf("Returning: %s\n", temp_str);
	return (temp_str);
}
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	int		match_count;
	//int		space_count;
	char	*temp_str;

	match_count = 0;
	temp_str = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (temp_str == NULL)
		return (NULL);

	while ((s1[match_count] == set[match_count] && match_count == 0) 
		|| s1[match_count] < 33 || s1[match_count] == 127)
	{
		printf("Checking: %d = %c\n", s1[match_count], s1[match_count]);
		if (s1[match_count])
		match_count++;
	}

	ft_own_memcpy(temp_str, s1 + match_count);

	ft_backcheck(temp_str, set, 0, 0);

	return (temp_str);
}

#include <stdio.h>

int	main(void)
{
	const char	*string, *set;

	string = "42Hello World!!42";
	set = "42";

	printf("\n-----\nCheck 1\n-----\nString: %s\nSet: %s\nReturn: %s\n\n", string, set, ft_strtrim(string, set));

	string = "42Hello World!!";
	printf("-----\nCheck 2\n-----\nString: %s\nSet: %s\nReturn: %s\n\n", string, set, ft_strtrim(string, set));

	string = "Hello World!!42";
	printf("-----\nCheck 3\n-----\nString: %s\nSet: %s\nReturn: %s\n\n", string, set, ft_strtrim(string, set));

	string = "Hello World!!";
	printf("-----\nCheck 4\n-----\nString: %s\nSet: %s\nReturn: %s\n\n", string, set, ft_strtrim(string, set));

	set = "";
	string = "42Hello World!!42";
	printf("-----\nCheck 5\n-----\nString: %s\nSet: %s\nReturn: %s\n\n", string, set, ft_strtrim(string, set));

	set = "Hello \t  Please\n Trim me !";
	string = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	printf("-----\nCheck 6\n-----\nString: %s\nSet: %s\nReturn: %s\n\n", string, set, ft_strtrim(string, set));

}

