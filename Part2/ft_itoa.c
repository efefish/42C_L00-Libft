#include "libft.h"

static	int	check_digit(unsigned int n)
{
	int	c_di;

	c_di = 1;
	if (n < 10)
		return (c_di);
	while (n >= 10)
	{
		n = n / 10;
		c_di++;
	}
	return (c_di);
}

static	int	check_minus(unsigned int c_di, int n)
{
	int		i;

	i = 0;
	if (n < 0)
		i = c_di;
	else
		i = c_di - 1;
	return (i);
}

char	*ft_itoa(int n)
{
	char			*array;
	unsigned int	sign;
	unsigned int	c_di;
	int				i;

	sign = (n < 0) ? (n * (-1)) : n;
	c_di = check_digit(sign);
	if (n < 0)
		array = (char *)malloc(sizeof(char) * (c_di + 2));
	else
		array = (char *)malloc(sizeof(char) * (c_di + 1));
	if (array == NULL)
		return (NULL);
	if (n < 0)
		array[0] = '-';
	i = check_minus(c_di, n);
	while (sign >= 10)
	{
		array[i] = sign % 10 + '0';
		sign = sign / 10;
		i--;
	}
	array[i] = sign + '0';
	array[(n < 0) ? c_di + 1 : c_di] = '\0';
	return (array);
}
