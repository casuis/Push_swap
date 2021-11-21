/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 02:16:44 by arthur            #+#    #+#             */
/*   Updated: 2021/11/21 17:06:25 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

t_num	*ft_swap_a(t_num *str, size_t size)
{
	t_num	buff;

	if (str[0].index != -1 && str[1].index != -1 && size > 2)
	{
		buff = str[0];
		str[0] = str[1];
		str[1] = buff;
	}
	return (str);
}

t_num	*ft_swap_b(t_num *str, size_t size)
{
	size_t	b_start;
	t_num	buff;

	b_start = size / 2;
	if (str[b_start].nb && str[b_start + 1].nb && size > 2)
	{
		buff = str[b_start];
		str[b_start] = str[b_start + 1];
		str[b_start + 1] = buff;
	}
	return (str);
}

t_num	*ft_swap_ss(t_num *str, size_t size)
{
	size_t	b_start;

	b_start = size / 2;
	if (str[b_start].nb && str[b_start + 1].nb && str[0].nb && str[1].nb)
	{
		str = ft_swap_a(str, size);
		str = ft_swap_b(str, size);
	}
	return (str);
}
