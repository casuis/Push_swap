/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 13:54:55 by asimon            #+#    #+#             */
/*   Updated: 2020/01/15 15:58:15 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen_b(const char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char			*ft_strdup(const char *s1)
{
	char		*ret;
	int			i;

	i = 0;
	if (!(ret = (char*)malloc(sizeof(char) * (ft_strlen_b(s1) + 1))))
		return (NULL);
	while (s1[i])
	{
		ret[i] = s1[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
