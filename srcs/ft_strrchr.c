#include "../libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	
	i = 0;
	while(str[i])
	{
		i++;
	}
	if (c == '\0')
	{
		return (str[i + 1]);
	}
	while(i)
	{
		if (str[i] == c)
		{
			return (str[i]);
		}
		i--;
	}
	return (NULL);
}