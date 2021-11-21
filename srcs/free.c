/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 22:13:12 by arthur            #+#    #+#             */
/*   Updated: 2021/11/21 17:02:01 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	ft_free_tab(t_num *tab, size_t size)
{
	int		i;

	i = 0;
	while ((size_t)i < size)
	{
		free(tab[i].binaire);
		i++;
	}
	free(tab);
}

void	ft_free_buff(char **buff, size_t size)
{
	int		i;

	i = 0;
	while ((size_t)i < size)
	{
		free(buff[i]);
		i++;
	}
	free(buff);
}
