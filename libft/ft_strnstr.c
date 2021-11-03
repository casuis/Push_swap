/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 20:59:49 by asimon            #+#    #+#             */
/*   Updated: 2020/01/14 09:52:29 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle)
	{
		while (i < len && haystack[i])
		{
			j = 0;
			while (i + j < len && needle[j] && haystack[i + j] == needle[j])
				j++;
			if (needle[j] == 0)
				return ((char *)(&haystack[i]));
			i++;
		}
		return (NULL);
	}
	else
		return (char *)(haystack);
}
