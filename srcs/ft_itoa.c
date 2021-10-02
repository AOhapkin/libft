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
	if (n == -2147483648)
	{
		return (ft_strdup("-2147483648"));
	}
	
}
