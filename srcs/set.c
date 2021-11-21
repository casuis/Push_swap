/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:43:30 by asimon            #+#    #+#             */
/*   Updated: 2021/11/21 16:38:27 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

t_num	*ft_set_index(t_num *nb, size_t size)
{
	int		i;
	int		*buff;
	int		j;

	j = 0;
	i = -1;
	buff = (int *)malloc(sizeof(int) * size / 2);
	while ((size_t)++i < size / 2)
		buff[i] = nb[i].nb;
	buff = ft_order(buff, size);
	i = 0;
	while ((size_t)i < size / 2)
	{
		while (buff[i] != nb[j].nb)
			j++;
		nb[j].index = i;
		j = 0;
		i++;
	}
	free(buff);
	return (nb);
}

char	**ft_set_buff(char **ret, char *str)
{
	int		i;
	int		i_ret;
	int		i_str;

	i = 0;
	i_str = 0;
	i_ret = 0;
	while (str[i] != 0)
	{
		ret[i_ret] = ft_create("", ft_count_char(&str[i]));
		while (ft_isdigit(str[i]) || (str[i] == '-' && ft_isdigit(str[i + 1])))
		{
			ret[i_ret][i_str] = str[i];
			i_str++;
			i++;
		}
		ret[i_ret][i_str] = '\0';
		i_str = 0;
		if (str[i] == ' ')
			i++;
		i_ret++;
	}
	return (ret);
}
