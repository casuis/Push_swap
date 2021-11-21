/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 23:06:56 by asimon            #+#    #+#             */
/*   Updated: 2020/01/14 10:10:01 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t count, size_t size)
{
	void	*ret;
	int		len;

	len = count * size;
	if (!(ret = malloc(len)))
		return (NULL);
	ft_bzero(ret, len);
	return (ret);
}
