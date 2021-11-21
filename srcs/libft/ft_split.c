/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 15:57:03 by asimon            #+#    #+#             */
/*   Updated: 2020/01/14 11:01:59 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		*ft_strfree(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i > 0)
	{
		i--;
		free(str[i]);
	}
	free(str);
	return ((void *)0);
}

static int		ft_nbw(char const *s, char c)
{
	int		i;
	int		j;

	if (!s)
		return (-1);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (j);
}

static int		ft_w(char const *s, int i, char c)
{
	while (s[i] != c && s[i])
		i++;
	return (i + 1);
}

char			**ft_split(char const *s, char c)
{
	char	**ret;
	int		i[3];

	if ((ft_nbw(s, c) == -1)
			|| !(ret = (char **)malloc(sizeof(char *) * (ft_nbw(s, c) + 1))))
		return (NULL);
	i[0] = 0;
	i[1] = 0;
	while (s[i[0]])
	{
		if (s[i[0]] != c)
		{
			if (!(ret[i[1]] = (char *)malloc(sizeof(char) * ft_w(s, i[0], c))))
				return (ft_strfree(ret));
			i[2] = 0;
			while (s[i[0]] != c && s[i[0]])
				ret[i[1]][i[2]++] = s[i[0]++];
			ret[i[1]][i[2]] = '\0';
			i[1]++;
		}
		else
			i[0]++;
	}
	ret[i[1]] = NULL;
	return (ret);
}
