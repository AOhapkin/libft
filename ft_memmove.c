/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmyriah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 12:37:11 by gmyriah           #+#    #+#             */
/*   Updated: 2021/10/19 12:37:11 by gmyriah          ###   ########.fr       */
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
