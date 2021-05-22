#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char			*d_array;
	const unsigned char		*s_array;
	size_t					i;

	d_array = (unsigned char *)dest;
	s_array = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d_array[i] = s_array[i];
		if (s_array[i] == (unsigned char)c)
			return ((void *)(d_array + i + 1));
		i++;
	}
	return (NULL);
}
