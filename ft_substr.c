/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:05:20 by ychai             #+#    #+#             */
/*   Updated: 2024/04/16 16:37:30 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_substr(char const *s, unsigned int start, int len)
{
	char	*temp_str;
	int		count;

	if (s == NULL)
		return (NULL);
	temp_str = (char *)malloc(sizeof(char) * (len + 1));
	count = 0;
	if (temp_str == NULL)
		return (NULL);
	while (count < len && start < (unsigned int)ft_strlen(s))
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
	int			size;

	str = "Hello World!!";
	size = 6;
	printf("\nMain String: %s\n", str);
	printf("Rtn:%s\n", ft_substr(str, 3, size));

	str = "01234";
	size = 10;
	printf("\nMain String: %s\n", str);
	printf("Rtn:%s\n", ft_substr(str, 10, size));

}
*/
