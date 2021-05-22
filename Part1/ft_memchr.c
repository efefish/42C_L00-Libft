/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfujisaw <tfujisaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 19:52:47 by tfujisaw          #+#    #+#             */
/*   Updated: 2020/11/13 17:12:48 by tfujisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s_array;
	size_t				i;

	s_array = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (s_array[i] == (unsigned char)c)
			return ((void *)s_array + i);
		i++;
	}
	return (NULL);
}
