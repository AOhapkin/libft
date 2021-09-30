#include "../libft.h"

int	ft_count_strs(char const *s, char c)
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if ((s[i] != c) && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			counter++;
		}
		i++;
	}
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;
	int		count_strs;

	count_strs = ft_count_strs(s, c);
}