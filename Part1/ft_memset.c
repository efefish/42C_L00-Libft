/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfujisaw <tfujisaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 19:52:19 by tfujisaw          #+#    #+#             */
/*   Updated: 2020/11/13 18:01:40 by tfujisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*array;
	size_t			i;

	array = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		array[i] = (unsigned char)c;
		i++;
	}
	return ((void *)array);
}
