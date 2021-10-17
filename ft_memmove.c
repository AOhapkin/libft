/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmyriah <gmyriah@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:54:26 by gmyriah           #+#    #+#             */
/*   Updated: 2021/10/09 15:02:07 by gmyriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (len == 0)
		return (dest);
	if (d > s)
	{
		d += len - 1;
		s += len - 1;
		while (len != 0)
		{
			*d-- = *s--;
			len--;
		}
	}
	else
	{
		while (len != 0)
		{
			*d++ = *s++;
			len--;
		}
	}
	return (dest);
}
