/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afairris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 11:10:37 by afairris          #+#    #+#             */
/*   Updated: 2017/01/10 11:10:38 by afairris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*link;
	t_list	*first;

	if (!f)
		return (NULL);
	new = (*f)(lst);
	first = ft_lstnew(new->content, new->content_size);
	link = first;
	lst = lst->next;
	while (lst)
	{
		new = (*f)(lst);
		link->next = ft_lstnew(new->content, new->content_size);
		link = link->next;
		lst = lst->next;
	}
	return (first);
}
