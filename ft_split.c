/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmyriah <gmyriah@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 18:29:01 by gmyriah           #+#    #+#             */
/*   Updated: 2021/10/10 16:36:04 by gmyriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_split_error(char **strs)
{
	size_t	i;

	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

int	ft_count_strs(char const *s, char c)
{
	int	n;

	n = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s && *s != c)
			n++;
		while (*s && *s != c)
			s++;
	}
	return (n);
}

char	*ft_push_str(char *s, char c)
{
	char	*str;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	str = (char *)malloc(sizeof(char) * (i));
	if (!str)
		return (NULL);
	i = 0;
	while (*s && *s != c)
	{
		str[i] = *s;
		i++;
		s++;
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	result = (char **) malloc(sizeof(char *) * (ft_count_strs(s, c) + 1));
	if (!result)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			result[i] = ft_push_str((char *)s, c);
			if (!result[i])
				ft_split_error(result);
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	result[i] = 0;
	return (result);
}
