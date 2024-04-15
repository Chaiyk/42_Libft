/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:19:20 by ychai             #+#    #+#             */
/*   Updated: 2024/04/15 18:52:49 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_calloc(int num, int size)
{
	int	*temp_ptr;

	temp_ptr = malloc(num * size);
	if (temp_ptr)
		ft_bzero(temp_ptr, num * size);
	return (temp_ptr);
}
