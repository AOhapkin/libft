/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmyriah <gmyriah@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:44:15 by gmyriah           #+#    #+#             */
/*   Updated: 2021/10/10 16:02:04 by gmyriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		len;
	t_list	*list;

	len = 0;
	list = lst;
	while (list->next)
	{
		list = list->next;
		len++;
	}
	if (list->next == NULL)
		len++;
	return (len);
}
