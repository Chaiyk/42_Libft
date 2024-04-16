/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:19:20 by ychai             #+#    #+#             */
/*   Updated: 2024/04/16 17:52:59 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_calloc(size_t num, size_t size)
{
	void	*temp_ptr;

	temp_ptr = (void *)malloc(num * size);
	if (temp_ptr == NULL)
		return (NULL);
	ft_bzero(temp_ptr, num * size);
	return (temp_ptr);
}
