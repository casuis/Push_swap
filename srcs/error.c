/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 23:04:19 by asimon            #+#    #+#             */
/*   Updated: 2021/11/21 18:25:11 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	ft_first_error(char **argv)
{
	int		i;

	i = 0;
	while (argv[1][i] != 0)
	{
		if (!(ft_isdigit(argv[1][i])) && argv[1][i + 1] == 0)
			return (1);
		if (!(ft_isdigit(argv[1][i])) &&
			((argv[1][i] == ' ' && !(ft_isdigit(argv[1][i + 1])
			|| argv[1][i + 1] == '-'))))
			return (1);
		if (argv[1][i] == '-' && !(ft_isdigit(argv[1][i +1])))
			return (1);
		if (argv[1][i] == '\n')
			return (1);
			i++;
	}
	return (0);
}

int	ft_second_error(char **argv, int argc)
{
	int		i;
	int		y;

	i = 1;
	y = 0;
	while (i < argc)
	{
		while (argv[i][y] != 0)
		{
			if (!(ft_isdigit(argv[i][y])) &&
				!((argv[i][y] == ' ' || argv[i][y] == '-')
				&& (ft_isdigit(argv[i][y + 1]))))
				return (1);
			y++;
		}
		i++;
		y = 0;
	}
	return (0);
}

int	ft_doublon_error(t_num *tab, size_t size)
{
	int		i;
	int		y;

	i = 0;
	y = i + 1;
	while ((size_t)i < size / 2)
	{
		while ((size_t)y < size / 2)
		{
			if (tab[i].nb == tab[y].nb)
				return (1);
			y++;
		}
		i++;
		y = i + 1;
	}
	return (0);
}

int	ft_core_error(char **argv, int argc)
{
	if (argc == 1)
		return (0);
	if (argc == 2)
		return (ft_first_error(argv));
	if (argc > 2)
		return (ft_second_error(argv, argc));
	return (-1);
}

t_num	*ft_check_max(char **buff, size_t size, t_num *tab, int argc)
{
	int		i;
	int		y;

	i = 0;
	y = size / 2;
	if (argc > 2)
	{
		i += 1;
		y = (size / 2) + 1;
	}
	while (i < y)
	{
		if (ft_atoi(buff[i]) > 2147483647)
			return (NULL);
		i++;
	}
	return (tab);
}
