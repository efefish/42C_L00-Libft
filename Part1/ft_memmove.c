/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfujisaw <tfujisaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 19:53:02 by tfujisaw          #+#    #+#             */
/*   Updated: 2020/11/26 18:07:55 by tfujisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char			*d_array;
	const unsigned char		*s_array;
	size_t					i;

	if (dest == NULL && src == NULL)
		return (NULL);
	d_array = (unsigned char *)dest;
	s_array = (const unsigned char *)src;
	i = 0;
	if (d_array < s_array)
	{
		while (i < n)
		{
			d_array[i] = s_array[i];
			i++;
		}
	}
	else
	{
		while (0 < n--)
			d_array[n] = s_array[n];
	}
	return ((void *)dest);
}
