/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmyriah <gmyriah@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:08:23 by gmyriah           #+#    #+#             */
/*   Updated: 2021/10/09 13:19:38 by gmyriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	str_len;

	if (!str) {
		return (NULL);
	}
	else if ((str_len = ft_strlen(str)) <= start) {
		return (ft_newstr(0));
	}
	len = (len + start) > str_len
			? str_len - start
			: len;
	if (!(substr = ft_newstr(len)))
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = str[start + i];
		i++;
	}
	return (substr);
}
