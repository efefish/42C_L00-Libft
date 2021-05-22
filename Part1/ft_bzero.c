#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*array;
	size_t			i;

	array = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		array[i] = '\0';
		i++;
	}
}
