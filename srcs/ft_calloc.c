#include "../libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_bytes;
	void	*ptr;

	total_bytes = nmemb * size;
	ptr = malloc(total_bytes);
	if (!ptr)
		return (NULL);
	ft_memset((unsigned char *)ptr, 0, total_bytes);
	return (ptr);
}