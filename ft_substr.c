/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:05:20 by ychai             #+#    #+#             */
/*   Updated: 2024/04/15 19:15:23 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_substr(char const *s, unsigned int start, int len)
{
	char	*temp_str;
	int		count;

	if (s == NULL)
		return (NULL);
	temp_str = (char *)malloc(ft_strlen(s) + 1);
	count = 0;
	if (temp_str == NULL)
		return (NULL);
	while (count < len)
	{
		temp_str[count] = s[count + start];
		count++;
	}
	temp_str[count] = '\0';
	return (temp_str);
}
/*
#include <stdio.h>

int	main(void)
{

	const char*	str;

	str = "Hello World!!";
	printf("\nMain String: %s\nReturn:%s\n", str, ft_substr(str, 3, 6));

}
*/
