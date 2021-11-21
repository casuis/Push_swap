/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_little.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 02:52:51 by arthur            #+#    #+#             */
/*   Updated: 2021/11/21 17:02:50 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

t_num	*ft_exit(t_num *tab, size_t size, char **str)
{
	int		i;
	int		y;

	i = (size / 2) - 3;
	y = 0;
	while (i > 0)
	{
		if (tab[0].index == y)
		{
			tab = ft_push_b(tab, size);
			*str = ft_strconc(*str, "pb\n");
			i--;
			y++;
		}
		else
		{
			tab = ft_rotate_a(tab, size);
			*str = ft_strconc(*str, "ra\n");
		}
	}
	return (tab);
}

t_num	*ft_core_little(t_num *tab, size_t size, char **ret)
{
	if (size / 2 == 2 && ft_test(tab, size))
	{
		tab = ft_swap_a(tab, size);
		*ret = ft_strconc(*ret, "sa\n");
	}
	else if (ft_test(tab, size))
	{
		tab = ft_exit(tab, size, ret);
		tab = ft_parse_act_little(tab, size, ret);
		if ((size / 2) == 3)
			return (ft_rollback(tab, ret, size));
		else
		{
			while (tab[size / 2].index != -1)
			{
				tab = ft_push_a(tab, size);
				*ret = ft_strconc(*ret, "pa\n");
			}
		}
	}
	return (tab);
}
