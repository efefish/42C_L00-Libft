/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfujisaw <tfujisaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 00:08:01 by tfujisaw          #+#    #+#             */
/*   Updated: 2020/11/22 23:27:02 by tfujisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	s_len;

	s_len = (size_t)ft_strlen(s) + 1;
	while (s_len--)
	{
		if (s[s_len] == (char)c)
			return ((char *)s + s_len);
	}
	return (NULL);
}
