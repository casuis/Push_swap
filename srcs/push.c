/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 02:04:19 by arthur            #+#    #+#             */
/*   Updated: 2021/11/21 16:18:09 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

t_num	*ft_push(t_num *str, t_num nw, int stop, int start)
{
	t_num		buff;
	int			i;

	i = start;
	buff = str[start];
	while (i < stop)
	{
		str[i] = nw;
		nw = buff;
		buff = str[i + 1];
		i++;
	}
	free(nw.binaire);
	return (str);
}

t_num	*ft_delete(t_num *str, int pos, int stop)
{
	int		i;
	t_num	buff;

	i = pos;
	buff = str[i];
	while (i < stop)
	{
		str[i] = str[i + 1];
		i++;
	}
	str[stop - 1] = ft_init_b(str[stop - 1]);
	return (str);
}

t_num	*ft_push_a(t_num *str, size_t size)
{
	size_t		b_start;

	b_start = size / 2;
	if (str[b_start].index >= 0)
	{
		str = ft_push(str, str[b_start], (size / 2), 0);
		str = ft_delete(str, b_start, size);
	}
	return (str);
}

t_num	*ft_push_b(t_num *str, size_t size)
{
	size_t		b_start;

	b_start = size / 2;
	if (str[0].index >= 0)
	{
		str = ft_push(str, str[0], size, b_start);
		str = ft_delete(str, 0, b_start);
	}
	return (str);
}
