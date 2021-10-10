/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmyriah <gmyriah@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:02:45 by gmyriah           #+#    #+#             */
/*   Updated: 2021/10/10 17:40:11 by gmyriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*temp;

	newlst = NULL;
	if (lst && f && del)
	{
		while (lst)
		{
			temp = ft_lstnew((*f)(lst->content));
			if (!temp)
			{
				while (newlst)
				{
					temp = newlst->next;
					(*del)(newlst->content);
					free(newlst);
					newlst = temp;
				}
			}
			ft_lstadd_back(&newlst, temp);
			lst = lst->next;
		}
	}
	return (newlst);
}