/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bin_op.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 02:48:38 by arthur            #+#    #+#             */
/*   Updated: 2021/11/21 16:59:22 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

size_t	ft_size_bin(int nb)
{
	size_t		i;

	i = 0;
	while (nb > 0)
	{
		nb /= 2;
		i++;
	}
	return (i);
}

int	*ft_bin_chng(int nb, t_num *num)
{
	int		i;
	int		*ret;

	i = 0;
	if (nb == 0)
	{
		ret = (int *)malloc(sizeof(int) * 1);
		ret[i] = 0;
		num->bin_size = 1;
		return (ret);
	}
	ret = (int *)malloc(sizeof(int) * ft_size_bin(nb));
	while (nb > 0)
	{
		ret[i] = nb % 2;
		nb /= 2;
		i++;
	}
	num->bin_size = i;
	return (ret);
}
