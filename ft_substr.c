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

	if (!str)
		return (NULL);
	str_len = ft_strlen(str);
	if (str_len <= start)
		return (ft_newstr(0));
	if ((len + start) > str_len)
		len = str_len - start;
	substr = ft_newstr(len);
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = str[start + i];
		i++;
	}
	return (substr);
}
