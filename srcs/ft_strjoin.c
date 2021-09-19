#include "../libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*dest;
	int		dest_len;
	int		i;
	int		j;

	dest_len = ft_strlen(str1) + ft_strlen(str2);
	dest = malloc(sizeof(char) * dest_len);
	if (!dest)
		return (NULL);
	i = 0;
	j = 0;
	while (str1[i])
	{
		dest[j] = str1[i];
		i++;
		j++;
	}
	i = 0;
	while (str2[i])
	{
		dest[j] = str2[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}