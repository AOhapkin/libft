#include "../libft.h"

int	ft_n_len(int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i + 1);
}

char	*ft_itoa(int n)
{
	char	*dest;
	int	i;
	int	n_len;

	i = 0;
	n_len = ft_n_len(n);
	if (n == -2147483648)
	{
		return (ft_strdup('-2147483648'));
	}
	if (ft_isnegative(n))
	{
		dest[i] = '-';
		n *= -n;
	}
	i = n_len;
	while (n > 9)
	{
		dest[i] = n % 10 + '0';
		n /= 10;
		i--;
	}
	dest[i] = n % 10 + '0';
	dest[n_len] = '\0';
	return (dest);
}
