/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmyriah <gmyriah@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 18:24:11 by gmyriah           #+#    #+#             */
/*   Updated: 2021/10/09 16:30:23 by gmyriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	isinset(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*substr;
	size_t	sub_start;
	size_t	sub_end;

	if (!s1 || !set)
		return (NULL);
	sub_start = 0;
	while (s1[sub_start] && isinset(s1[sub_start], set))
		sub_start++;
	sub_end = ft_strlen(s1);
	while (sub_start < sub_end && isinset(s1[sub_end - 1], set))
		sub_end--;
	substr = (char *) malloc(sizeof(*s1) * (sub_end - sub_start + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (sub_start != sub_end)
		substr[i++] = s1[sub_start++];
	substr[i] = '\0';
	return (substr);
}
