#include "../libft.h"

void	*ft_memset(void *dest, int c, size_t count)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = dest;
	while (i < count)
	{
		ptr[i] = c;
		i++;
	}
	return (dest);
}