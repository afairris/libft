/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afairris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 11:12:41 by afairris          #+#    #+#             */
/*   Updated: 2017/01/10 11:12:41 by afairris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isblank(int c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

char		*ft_strtrim(char const *s)
{
	unsigned int	i;
	size_t			len;
	char			*ret;

	i = 0;
	if (!s)
	{
		return (0);
	}
	while (ft_isblank(s[i]))
	{
		i++;
	}
	len = ft_strlen(s) - 1;
	while (len > i && ft_isblank(s[len]))
	{
		len--;
	}
	if (len < i)
	{
		return (ret = ft_strdup(""));
	}
	return (ret = ft_strsub(s, i, len - (size_t)i + 1));
}
