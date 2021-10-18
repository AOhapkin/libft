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

size_t	ft_count_strs(char const *s, char c)
{
	size_t	n;

	n = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			n++;
			while (*s && *s != c)
				s++;
		}
	}
	return (n);
}

char	*ft_push_str(char const *s, char c)
{
	char	*substr;
	size_t	len;
	size_t	i;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	substr = ft_newstr(len);
	if (!substr)
		return (NULL);
	i = 0;
	while (*s && *s != c)
		substr[i] = *s++;
	return (substr);
}

char	**ft_split(char const *s, char c)
{
	char		**result;
	size_t		i;

	if (!s)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (ft_count_strs(s, c) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			result[i] = ft_push_str(s, c);
		if (!result[i])
			return (ft_split_error(result));
		while (*s && *s != c)
			s++;
	}
	result[i] = 0;
	return (result);
}
