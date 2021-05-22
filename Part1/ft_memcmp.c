/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfujisaw <tfujisaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 19:52:44 by tfujisaw          #+#    #+#             */
/*   Updated: 2021/04/25 21:56:07 by tfujisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1_array;
	const unsigned char	*s2_array;
	size_t				i;

	s1_array = (const unsigned char *)s1;
	s2_array = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1_array[i] != s2_array[i])
			return (s1_array[i] - s2_array[i]);
		i++;
	}
	return (0);
}
