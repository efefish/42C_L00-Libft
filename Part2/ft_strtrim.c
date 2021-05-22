#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*array;
	size_t	count1;
	size_t	count2;
	size_t	i;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return ((char *)s1);
	count1 = 0;
	count2 = ft_strlen(s1);
	i = 0;
	while (ft_strchr(set, s1[count1]) && s1[count1])
		count1++;
	while (ft_strchr(set, s1[count2 - i - 1]) && count1 < count2)
		i++;
	array = (char *)malloc(sizeof(char) * (count2 - count1 - i + 1));
	if (array == NULL)
		return (NULL);
	ft_strlcpy(array, (s1 + count1), (count2 - count1 - i + 1));
	return (array);
}
