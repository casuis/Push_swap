/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 02:10:45 by arthur            #+#    #+#             */
/*   Updated: 2021/11/21 17:04:26 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

t_num	*ft_rev_rotate(t_num *str, int start, int end)
{
	t_num	buff;
	t_num	new;
	int		i;
	int		y;

	i = start;
	y = 0;
	if (str[end - 1].index != -1)
		new = str[end - 1];
	else
	{
		while (str[end - (1 + y)].index == -1)
			y++;
		new = str[end - (1 + y)];
	}
	while (i < end && i + y < end)
	{
		buff = str[i];
		str[i] = new;
		new = buff;
		i++;
	}
	return (str);
}

t_num	*ft_rotate_ra(t_num *str, size_t size)
{
	size_t	b_start;

	b_start = size / 2;
	str = ft_rev_rotate(str, 0, b_start);
	return (str);
}

t_num	*ft_rotate_rb(t_num *str, size_t size)
{
	size_t	b_start;

	b_start = size / 2;
	str = ft_rev_rotate(str, b_start, size);
	return (str);
}

t_num	*ft_rotate_rr(t_num *str, size_t size)
{
	str = ft_rotate_ra(str, size);
	str = ft_rotate_rb(str, size);
	return (str);
}
