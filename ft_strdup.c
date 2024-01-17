/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Steven <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 01:16:03 by Steven            #+#    #+#             */
/*   Updated: 2024/01/02 19:02:51 by Steven           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *str)
{
	char	*temp_ptr;
	int		count;

	count = 0;
	temp_ptr = (char *)malloc (sizeof (str));
	if (!temp_ptr)
		return (0);
	while (str[count] != '\0')
	{
		temp_ptr[count] = str[count];
		count++;
	}
	temp_ptr[count] = '\0';
	return (temp_ptr);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char*	main_str;
	char*	ret_str;

	main_str = "Hello World!";
	ret_str = (char*)strdup(main_str);
	printf("\n--Ori--\nReturn: %s\n", ret_str);

	ret_str = "";
	printf("\n--Reset--\nReturn: %s\n", ret_str);

	ret_str = (char*)ft_strdup(main_str);
	printf("\n--Own--\nReturn: %s\n", ret_str);

	free(ret_str);
}
*/
