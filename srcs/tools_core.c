/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_core.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:45:43 by arthur            #+#    #+#             */
/*   Updated: 2021/11/21 16:47:04 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	*ft_order(int *buff, size_t size)
{
	int		i;
	int		tmp;

	i = 0;
	tmp = 0;
	while ((size_t)i < (size / 2) - 1)
	{
		if (buff[i] > buff[i + 1])
		{
			tmp = buff[i];
			buff[i] = buff[i + 1];
			buff[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
	return (buff);
}

int	ft_test(t_num *tab, size_t size)
{
	int		i;

	i = 0;
	while ((size_t)i < (size / 2) - 1)
	{
		if (tab[i].index > tab[i + 1].index)
			return (1);
		i++;
	}
	return (0);
}

t_num	*ft_rollback(t_num *tab, char **str, size_t size)
{
	while (tab[size / 2].index >= 0)
	{
		tab = ft_push_a(tab, size);
		*str = ft_strconc(*str, "pa\n");
	}
	return (tab);
}
