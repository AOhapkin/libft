/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmyriah <gmyriah@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:54:26 by gmyriah           #+#    #+#             */
/*   Updated: 2021/10/09 11:52:04 by gmyriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*d;
	const unsigned char	*s;
	size_t	i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (len == 0 || s == d)
		return (dest);
	if (d > s)
	{
		d += len - 1;
		s += len - 1;
		while (len != 0)
		{
			*d = *s;
			len--;
			s--;
			d--;
		}
	}
	else
	{
		ft_memcpy(d, s, len);
	}
	return (dest);
}
