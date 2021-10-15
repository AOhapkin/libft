/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmyriah <gmyriah@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 18:51:50 by gmyriah           #+#    #+#             */
/*   Updated: 2021/10/10 14:53:31 by gmyriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_n_len(long nb)
{
	size_t	len;

	len = 0;
	if (nb < 0)
		len++;
	while (nb / 10)
	{
		nb /= 10;
		len++;
	}
	len++;
	return (len);
}

char	*ft_itoa(int n)
{
	char	*dest;
	long	nb;
	size_t	len;

	nb = (long)n;
	len = ft_n_len(nb);
	dest = ft_newstr(len);
	if (!dest)
		return (0);
	dest[0] = '0';
	if (n == 0)
		return (dest);
	if (nb < 0)
	{
		dest[0] = '-';
		nb *= -1;
	}
	len--;
	while (nb > 0)
	{
		dest[len] = nb % 10 + '0';
		nb /= 10;
		len--;
	}
	return (dest);
}
