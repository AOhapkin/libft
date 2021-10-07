/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmyriah <gmyriah@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:15:08 by gmyriah           #+#    #+#             */
/*   Updated: 2021/10/07 16:16:30 by gmyriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
//	size_t	j;
//	char	*h;
//	char	*n;
	size_t	needle_len;

//	h = (char *)(haystack);
	if (*needle == '\0')
		return ((char *)haystack);
//	while (*haystack != '\0' && len != 0)
//	{
//		j = len;
//		while (*haystack == *needle && *needle != '\0' && j != 0)
//		{
//			needle++;
//			haystack++;
//			j--;
//
//		}
//		if (*needle == '\0')
//			return ((char *)haystack);
//		haystack++;
//		len--;
//	}
	needle_len = ft_strlen(needle);
	while (len >= needle_len)
	{
		if (!ft_memcmp(haystack, needle, needle_len))
			return ((char *)haystack);
		len--;
		haystack++;
	}
	return (NULL);
}
