/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 16:01:13 by asimon            #+#    #+#             */
/*   Updated: 2020/01/14 11:03:44 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0 && (*s1 && *s2))
	{
		if (*(unsigned char*)s1 != *(unsigned char*)s2)
			return (*(unsigned char*)s1 - *(unsigned char*)s2);
		s1++;
		s2++;
		n--;
	}
	if (((*(unsigned char*)s1 == '\0' && *(unsigned char*)s2 != '\0')
	|| (*(unsigned char*)s1 != '\0' && *(unsigned char*)s2 == '\0')) && n > 0)
		return (*(unsigned char*)s1 - *(unsigned char*)s2);
	return (0);
}
