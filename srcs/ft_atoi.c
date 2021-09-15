#include "../libft.h"

int	ft_atoi(const char *nptr)
{
	int	result;
	int	negative;
	int	i;

	result = 0;
	negative = 1;
	i = 0;
	while (nptr[i] && ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '-')
	{
		negative = -1;
		i++;
	}
	if (nptr[i] == '+')
		i++;
	while (ft_isdigit(nptr[i]))
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * negative);
}