/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 16:38:16 by asimon            #+#    #+#             */
/*   Updated: 2020/01/15 15:58:59 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_strlen_b(const char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int		i;

	i = 0;
	if (!src)
		return (0);
	if (dstsize > 1)
	{
		while ((i < dstsize - 1) && src[i])
		{
			dst[i] = src[i];
			i++;
		}
	}
	if (dstsize > 0)
		dst[i] = '\0';
	return (ft_strlen_b(src));
}
