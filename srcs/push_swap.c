/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 02:29:26 by arthur            #+#    #+#             */
/*   Updated: 2021/11/21 20:25:35 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	ft_parse_core(int argc, int *size)
{
	if (argc > 2)
		*size = (argc - 1) * 2;
	else if (argc == 2)
		*size = 0;
	else
		return (0);
	return (-1);
}

char	*ft_push_swap(char **argv, int argc)
{
	int		size;
	char	*ret;
	t_num	*tab;

	if (ft_parse_core(argc, &size) == 0)
		return (NULL);
	if (ft_core_error(argv, argc))
		return ("Error\n");
	tab = ft_parse_init(argc, argv, &size);
	if (tab == NULL)
		return ("Error\n");
	if (ft_doublon_error(tab, size))
	{
		ft_free_tab(tab, size);
		return ("Error\n");
	}
	ret = ft_create("", 1);
	if (size / 2 > 5)
		tab = ft_core(tab, size, &ret);
	else
		tab = ft_core_little(tab, size, &ret);
	ft_free_tab(tab, size);
	return (ret);
}

int	main(int argc, char **argv)
{
	char	*ret;
	char	*buff;

	buff = "Error\n";
	ret = ft_push_swap(argv, argc);
	ft_putstr(ret);
	if (ret != NULL && ret != buff)
		free(ret);
	return (0);
}
