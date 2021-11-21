/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:20:51 by asimon            #+#    #+#             */
/*   Updated: 2020/01/14 11:00:58 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *s, int c, size_t n)
{
	unsigned int		i;

	i = -1;
	if (n > 0)
	{
		*((unsigned char*)s) = c;
		while (++i < n)
			*((unsigned char*)s + i) = c;
	}
	return (s);
}
