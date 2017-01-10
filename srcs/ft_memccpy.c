/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afairris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 11:10:45 by afairris          #+#    #+#             */
/*   Updated: 2017/01/10 11:10:46 by afairris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t len)
{
	while (len)
	{
		*((char*)dst) = *((char*)src);
		dst = (void*)((char*)dst + 1);
		src = (void*)((char*)src + 1);
		if ((char)(c) == *((char*)dst - 1))
		{
			return (dst);
		}
		len--;
	}
	return (NULL);
}
