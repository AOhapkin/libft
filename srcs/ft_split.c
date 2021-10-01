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

int	ft_s_len(char const *s, char c) {
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

void ft_malloc_error(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

char	**ft_save_array(char const *s, char c, int strs_number, char **strs)
{
	int	i;
	int	j;
	int	str_len;

	i = 0;
	while (i < strs_number)
	{
		while (*s == c)
		{
			*s++;
		}
		str_len = ft_s_len(s, c);
		strs[i] = (char *)malloc(sizeof(char) * (str_len + 1));
		if (!strs[i])
		{
			ft_malloc_error(strs);
			return (NULL);
		}
		j = 0;
		while (j < str_len)
		{
			strs[i][j] = *s;
			*s++;
		}
		strs[i][j] = '\0';
		i++;
	}
	strs[i] = NULL;
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;
	int		strs_number;

	strs_number = ft_count_strs(s, c);
	strs = (char **)malloc(sizeof(char *) * (strs_number + 1));
	if (!strs)
		return (NULL);
	strs = ft_save_array(s, c, strs_number, strs);
	return (strs);
}