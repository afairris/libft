/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afairris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 11:10:50 by afairris          #+#    #+#             */
/*   Updated: 2017/01/10 11:10:51 by afairris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *src1;
	const unsigned char *src2;

	src1 = s1;
	src2 = s2;
	while (n--)
	{
		if (*src1 != *src2)
		{
			return (*src1 - *src2);
		}
		else
		{
			src1++;
			src2++;
		}
	}
	return (0);
}
