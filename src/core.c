/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 02:34:12 by arthur            #+#    #+#             */
/*   Updated: 2021/11/21 16:57:05 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

t_num	*ft_core_bcl(t_num *tab, size_t size, char **str, t_arg val)
{
	while (val.cpt > 0)
	{
		if ((val.y < tab[0].bin_size && tab[0].binaire[val.y] == 0)
			|| (val.y >= tab[0].bin_size && tab[0].index != -1))
		{
			tab = ft_push_b(tab, size);
			*str = ft_strconc(*str, "pb\n");
		}
		else
		{
			tab = ft_rotate_a(tab, size);
			*str = ft_strconc(*str, "ra\n");
		}
		val.cpt--;
	}
	return (tab);
}

t_num	*ft_core(t_num *tab, size_t size, char **str)
{
	t_arg	val;

	val.y = 0;
	val.cpt = size / 2;
	while (ft_test(tab, size) != 0)
	{
		tab = ft_core_bcl(tab, size, str, val);
		val.cpt = size / 2;
		tab = ft_rollback(tab, str, size);
		val.y++;
	}
	return (tab);
}
