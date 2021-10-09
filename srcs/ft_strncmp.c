/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmyriah <gmyriah@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:58:45 by gmyriah           #+#    #+#             */
/*   Updated: 2021/10/09 11:52:04 by gmyriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n != 0)
	{
		while (n > 0)
		{
			if (*s1 != *s2)
				return (*(unsigned char *)s1 - *(unsigned char *)s2);
			if (*s1 == '\0')
				break ;
			s1++;
			s2++;
			n--;
		}
	}
	return (0);
}
