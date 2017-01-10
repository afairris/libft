/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afairris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 11:10:30 by afairris          #+#    #+#             */
/*   Updated: 2017/01/10 11:10:31 by afairris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if (alst && *alst)
	{
		(*del)((*alst)->content, (*alst)->content_size);
		if ((*alst)->next)
			ft_lstdel(&(*alst)->next, del);
		free(*alst);
		*alst = NULL;
	}
}
