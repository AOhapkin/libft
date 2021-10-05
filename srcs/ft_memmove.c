/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmyriah <gmyriah@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:54:26 by gmyriah           #+#    #+#             */
/*   Updated: 2021/10/05 14:56:27 by gmyriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memmove(void *dest, void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (!d)
		return (NULL);
	if (s >= d)
		ft_memcpy(d, s, len);
	else
	{
		while (len > 0)
		{
			d[len] = s[len];
			len--;
		}
	}
	return (dest);
}
