/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:38:48 by asimon            #+#    #+#             */
/*   Updated: 2020/01/14 11:00:43 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		*ft_memcpy_b(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_buff;
	unsigned char	*src_buff;
	int				i;

	dst_buff = ((unsigned char*)dst);
	src_buff = ((unsigned char*)src);
	i = 0;
	if (!dst && !src)
		return (NULL);
	if (n == 0)
		return (dst);
	if (n > 0)
	{
		while (n > 0)
		{
			dst_buff[i] = src_buff[i];
			i++;
			n--;
		}
		return (dst_buff);
	}
	return (NULL);
}

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_buff;
	unsigned char	*src_buff;
	unsigned int	i;

	dst_buff = (unsigned char*)dst;
	src_buff = (unsigned char*)src;
	if (len > 0)
		i = len - 1;
	else
		return (dst);
	if (dst <= src)
		return (ft_memcpy_b(dst, src, len));
	else
	{
		while (&dst_buff[i] != dst)
		{
			dst_buff[i] = src_buff[i];
			i--;
		}
		dst_buff[i] = src_buff[i];
	}
	return (dst);
}
