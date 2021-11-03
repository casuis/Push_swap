/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 16:28:59 by asimon            #+#    #+#             */
/*   Updated: 2020/01/14 11:03:58 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	unsigned char	*ret;

	ret = (unsigned char*)s;
	while (*ret)
		ret++;
	if (*ret == c)
		return ((char*)ret);
	while (ret != (unsigned char*)s)
	{
		if (*ret == c)
			return ((char*)ret);
		ret--;
	}
	if (*ret == c)
		return ((char*)ret);
	return (NULL);
}
