/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:46:47 by asimon            #+#    #+#             */
/*   Updated: 2020/01/14 10:59:35 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	while (n > 0)
	{
		if (*((unsigned char*)s) == (unsigned char)c)
			return ((void*)s);
		s++;
		n--;
	}
	return (NULL);
}
