#include "../libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	substr = malloc(sizeof(char) * len);
	if (!substr)
		return (NULL);
	i = 0;
	while (len)
	{
		substr[i] = str[i + start];
		len--;
		i++;
	}
	return (substr);
}