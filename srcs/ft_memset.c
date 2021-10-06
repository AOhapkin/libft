/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmyriah <gmyriah@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:42:12 by gmyriah           #+#    #+#             */
/*   Updated: 2021/10/05 15:23:41 by gmyriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memset(void *dest, int c, size_t count)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = dest;
	while (i < count)
	{
		ptr[i] = c;
		i++;
	}
	return (dest);
}
