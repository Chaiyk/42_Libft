/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:50:19 by ychai             #+#    #+#             */
/*   Updated: 2024/04/16 17:49:15 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*temp_str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]) && start <= end)
		start++;
	if (start > end)
		return (ft_strdup(s1 + (end + 1)));
	while (ft_strchr(set, s1[end]) && end >= 0)
		end--;
	temp_str = malloc(end - start + 2);
	if (temp_str == NULL)
		return (NULL);
	ft_strlcpy(temp_str, s1 + start, end - start + 2);
	return (temp_str);
}
/*
#include <stdio.h>

int	main(void)
{
	const char	*string, *set;
	char *rtn;

	string = "42Hello World!!42";
	set = "42";
	rtn = ft_strtrim(string, set);
	printf("\n-----\nCheck 1\n-----\n");
	printf("String: %s\nSet: %s\nReturn: %s\n\n",
			string, set, rtn);
	free(rtn);

	string = "42Hello World!!";
	rtn = ft_strtrim(string, set);
	printf("\n-----\nCheck 2\n-----\n");
	printf("String: %s\nSet: %s\nReturn: %s\n\n",
			string, set, rtn);
	free(rtn);

	string = "Hello World!!42";
	rtn = ft_strtrim(string, set);
	printf("\n-----\nCheck 3\n-----\n");
	printf("String: %s\nSet: %s\nReturn: %s\n\n",
			string, set, rtn);
	free(rtn);

	string = "Hello World!!";
	rtn = ft_strtrim(string, set);
	printf("\n-----\nCheck 4\n-----\n");
	printf("String: %s\nSet: %s\nReturn: %s\n\n",
			string, set, rtn);
	free(rtn);

	set = "";
	string = "42Hello World!!42";
	rtn = ft_strtrim(string, set);
	printf("\n-----\nCheck 5\n-----\n");
	printf("String: %s\nSet: %s\nReturn: %s\n\n",
			string, set, rtn);
	free(rtn);

	set = "42";
	string = "";
	rtn = ft_strtrim(string, set);
	printf("\n-----\nCheck 6\n-----\n");
	printf("String: %s\nSet: %s\nReturn: %s\n\n",
			string, set, rtn);
	free(rtn);

}
*/
