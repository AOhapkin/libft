#include "../libft.h"

char	*ft_strdup(const char *str)
{
	char	*dup;
	int	i;

	i = 0;
	dup = malloc(sizeof(char) * (ft_strlen(str)));
	if (!dup)
		return (NULL);
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}