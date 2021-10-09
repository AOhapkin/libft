/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmyriah <gmyriah@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 18:24:11 by gmyriah           #+#    #+#             */
/*   Updated: 2021/10/09 11:52:04 by gmyriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		s1_size;
	char	*substr;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && (&s1[i] == set))
		i++;
	s1_size = ft_strlen(s1);
	while(s1_size && (&s1[s1_size - 1] == set))
		s1_size--;
	substr = ft_substr(s1, i, (s1_size + 1));
	return (substr);
}