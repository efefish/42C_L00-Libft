/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfujisaw <tfujisaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 19:52:59 by tfujisaw          #+#    #+#             */
/*   Updated: 2021/04/25 21:55:49 by tfujisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d_array;
	const unsigned char	*s_array;
	size_t				i;

	d_array = (unsigned char *)dest;
	s_array = (const unsigned char *)src;
	if (d_array == '\0' && s_array == '\0')
		return (NULL);
	i = 0;
	while (i < n)
	{
		d_array[i] = s_array[i];
		i++;
	}
	return ((void *)dest);
}
