#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*array;
	unsigned int	i;

	if (s == NULL || f == NULL)
		return (NULL);
	array = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < (unsigned int)ft_strlen(s))
	{
		array[i] = f(i, s[i]);
		i++;
	}
	array[i] = '\0';
	return (array);
}
