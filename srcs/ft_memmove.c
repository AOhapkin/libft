#include "../libft.h"

void	*ft_memmove(void *dest, void *src, size_t len)
{
	size_t	i;
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (!d)
	{
		return (NULL);
	}
	if (s >= d)
	{
		ft_memcpy(d, s, len);
	}
	else
	{
		while (len > 0)
		{
			d[len] = s[len];
			len--;
		}
	}
	return (dest);
}