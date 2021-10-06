/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmyriah <gmyriah@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:27:07 by gmyriah           #+#    #+#             */
/*   Updated: 2021/10/05 15:27:28 by gmyriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_size;
	size_t	src_size;
	size_t	i;
	size_t	j;

	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < (size - (dest_size - 1)))
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest_size + src_size);
}
