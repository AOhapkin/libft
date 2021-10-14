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

size_t	ft_count_digits

char	*ft_itoa(int n)
{
	char	*dest;
	long	nb;
	size_t	i;

	nb = (long)n;
	i = ft_long_len(nb);
	dest = (char *)malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (NULL);
	dest[0] = '0';
	if (nb < 0)
	{
		dest[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		dest[i] = nb % 10 + '0';
		nb /= 10;
		i--;
	}
	return (dest);
}
