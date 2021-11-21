/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:41:11 by asimon            #+#    #+#             */
/*   Updated: 2021/11/21 19:35:43 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

t_num	*ft_parse_init(int argc, char **argv, int *size)
{
	t_num	*tab;

	if (argc > 2)
	{
		tab = (t_num *)malloc(sizeof(t_num) * (*size + 1));
		if (tab == NULL)
			return (NULL);
		if (ft_check_max(argv, *size, tab, argc) == NULL)
			return (NULL);
		tab = ft_init(tab, argv, *size, argc);
	}
	else if (argc == 2)
	{
		*size = ft_count_arg(argv[1]);
		*size *= 2;
		if (*size != -1)
			tab = (t_num *)malloc(sizeof(t_num) * (*size + 1));
		else
			return (NULL);
		tab = ft_parse_arg(argc, argv, size, tab);
	}
	else
		tab = NULL;
	return (tab);
}

t_num	*ft_parse_arg(int argc, char **argv, int *size, t_num *ret)
{
	char	**buff;

	if (*size != -1)
		buff = (char **)malloc(sizeof(char *) * (*size + 1));
	else
		buff = NULL;
	if (buff == NULL)
		return (NULL);
	buff = ft_set_buff(buff, argv[1]);
	if (ft_check_max(buff, *size, ret, argc) == NULL)
	{
		ft_free_buff(buff, *size);
		return (NULL);
	}
	ret = ft_init(ret, buff, *size, argc);
	ft_free_buff(buff, *size);
	return (ret);
}

size_t	ft_parse_com(t_num *tab, int y, int start, int end)
{
	size_t		i;

	i = 0;
	while (start < end)
	{
		if (y >= tab[start].bin_size && tab[start].index >= 0)
			i++;
		else if (y < tab[start].bin_size)
			if (tab[start].binaire[y] == 0)
				i++;
		start++;
	}
	return (i);
}

t_num	*ft_parse_act_little(t_num *tab, size_t size, char **str)
{
	if (tab[0].index > tab[1].index && tab[1].index < tab[2].index
		&& tab[0].index < tab[2].index)
	{
		tab = ft_swap_a(tab, size);
		*str = ft_strconc(*str, "sa\n");
	}
	else if (tab[0].index > tab[1].index && tab[1].index < tab[2].index
		&& tab[2].index < tab[0].index)
	{
		tab = ft_rotate_a(tab, size);
		*str = ft_strconc(*str, "ra\n");
	}
	else if (tab[0].index < tab[1].index && tab[1].index > tab[2].index
		&& tab[0].index > tab[2].index)
	{
		tab = ft_rotate_ra(tab, size);
		*str = ft_strconc(*str, "rra\n");
	}
	else
		tab = ft_parse_act_little_scnd(tab, size, str);
	return (tab);
}

t_num	*ft_parse_act_little_scnd(t_num *tab, size_t size, char **str)
{
	if (tab[0].index < tab[1].index && tab[1].index > tab[2].index
		&& tab[0].index < tab[2].index)
	{
		tab = ft_swap_a(tab, size);
		tab = ft_rotate_a(tab, size);
		*str = ft_strconc(*str, "sa\nra\n");
	}
	else if (tab[0].index > tab[1].index && tab[1].index > tab[2].index
		&& tab[0].index > tab[2].index)
	{
		tab = ft_swap_a(tab, size);
		tab = ft_rotate_ra(tab, size);
		*str = ft_strconc(*str, "sa\nrra\n");
	}
	return (tab);
}
