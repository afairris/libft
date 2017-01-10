/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afairris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 11:10:47 by afairris          #+#    #+#             */
/*   Updated: 2017/01/10 11:10:48 by afairris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	c2;
	int				i;

	i = 0;
	str = (unsigned char *)s;
	c2 = (unsigned char)c;
	while (n--)
	{
		if (str[i] == c2)
			return (str + i);
		i++;
	}
	return (NULL);
}
