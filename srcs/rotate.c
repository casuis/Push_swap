/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 02:06:36 by arthur            #+#    #+#             */
/*   Updated: 2021/11/21 19:36:44 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

t_num	*ft_rotate(t_num *str, int start, int end)
{
	int			i;
	t_num		buff;
	int			y;

	i = start;
	y = 0;
	buff = str[start];
	while (i < (end - 1) && i + y < (end - 1))
	{
		if (str[i + y + 1].index == -1)
			y++;
		else
		{
			str[i] = str[i + y + 1];
			y = 0;
			i++;
		}
	}
	str[i] = buff;
	return (str);
}

t_num	*ft_rotate_a(t_num *str, size_t size)
{
	size_t		b_start;

	b_start = size / 2;
	str = ft_rotate(str, 0, b_start);
	return (str);
}

t_num	*ft_rotate_b(t_num *str, size_t size)
{
	size_t		b_start;

	b_start = size / 2;
	str = ft_rotate(str, b_start, size);
	return (str);
}

t_num	*ft_rotate_r(t_num *str, size_t size)
{
	size_t		b_start;

	b_start = size / 2;
	str = ft_rotate_a(str, size);
	str = ft_rotate_b(str, size);
	return (str);
}
