/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfujisaw <tfujisaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 00:07:54 by tfujisaw          #+#    #+#             */
/*   Updated: 2020/11/17 20:23:09 by tfujisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char		*newarray;
	size_t		i;

	newarray = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (newarray == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		newarray[i] = s[i];
		i++;
	}
	newarray[i] = '\0';
	return (newarray);
}
