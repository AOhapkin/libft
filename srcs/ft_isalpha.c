#include "../libft.h"

int	ft_isalpha(int nb)
{
	if ((nb >= 'A' && nb <= 'Z') || (nb >= 'a' && nb <= 'z'))
	{
		return (1);
	}
	return (0);
}