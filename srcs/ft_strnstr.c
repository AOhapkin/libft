/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmyriah <gmyriah@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:15:08 by gmyriah           #+#    #+#             */
/*   Updated: 2021/10/05 16:48:11 by gmyriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;
	char	*h;

	i = 0;
	h = (char *)(haystack);
	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return (h);
	while (h[i] && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while ((i + j) < needle_len && haystack[i + j] == needle[j])
			{
				if (needle[j] == '\0')
					return (&h[i]);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
