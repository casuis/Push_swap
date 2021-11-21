/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:25:42 by asimon            #+#    #+#             */
/*   Updated: 2021/11/21 16:35:46 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

char	*ft_check(char *str)
{
	int		i;
	char	*ret;

	i = 0;
	ret = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
	if (ret == NULL)
		return (NULL);
	if (str[i] == '-' && str[i + 1] >= '0' && str[i + 1] <= '9')
	{
		ret[i] = str[i];
		i++;
	}
	while (str[i])
	{
		if (ft_isdigit(str[i]))
			ret[i] = str[i];
		if (!(ft_isdigit(str[i])))
			return (NULL);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

t_num	*ft_init_bin(t_num *ret, size_t size)
{
	int		i;

	i = 0;
	while ((size_t)i < size / 2)
	{
		ret[i].binaire = ft_bin_chng(ret[i].index, &ret[i]);
		i++;
	}
	while ((size_t)i < size)
	{
		ret[i] = ft_init_b(ret[i]);
		i++;
	}
	return (ret);
}

t_num	*ft_init(t_num *ret, char **argv, size_t size, int argc)
{
	int		i;
	char	*buff;

	i = 0;
	while ((size_t)i < size / 2)
	{
		if (argc > 2)
			buff = ft_check(argv[i + 1]);
		else
			buff = ft_check(argv[i]);
		ret[i].nb = ft_atoi(buff);
		free(buff);
		i++;
	}
	ret = ft_set_index(ret, size);
	ret = ft_init_bin(ret, size);
	return (ret);
}

t_num	ft_init_b(t_num ret)
{
	ret.nb = 0;
	ret.index = -1;
	ret.bin_size = -1;
	ret.binaire = malloc(sizeof(int) * 1);
	ret.binaire[0] = -2;
	return (ret);
}
