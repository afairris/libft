/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afairris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 11:12:17 by afairris          #+#    #+#             */
/*   Updated: 2017/01/10 11:12:18 by afairris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char *d;

	d = dst;
	while (len > 0 && *src != '\0')
	{
		*d++ = *src++;
		--len;
	}
	while (len > 0)
	{
		*d++ = '\0';
		--len;
	}
	return (dst);
}
