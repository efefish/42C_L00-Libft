#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*array;
	size_t	i;
	size_t	s_len;
	size_t	range;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len <= start)
		range = 1;
	else if (len <= s_len - start)
		range = len + 1;
	else
		range = (s_len - start) + 1;
	array = (char *)malloc(sizeof(char) * range);
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < range - 1)
	{
		array[i] = s[start + i];
		i++;
	}
	array[i] = '\0';
	return (array);
}
