/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 02:34:12 by arthur            #+#    #+#             */
/*   Updated: 2021/10/27 00:28:18 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft/libft.h"

void		ft_putchar(char c)
{
	write(1, &c, 1);
}


void		ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void		push_swap(char *str, ...)
{
	
}


char		**ft_check(char *str)
{
	int		i;
	char	*ret;

	i = 0;
	if (!(ret = (char *)malloc(sizeof(char) * ft_strlen(str) + 1)))
		return (NULL);
	while (str[i])
	{
		if (((str[0] == '-' || str[0] == '+') &&
			(str[i] >= '0' && str[i] <= '9')) ||
			(str[0] <= '9' || str[0] >= '0') &&
			(str[i] >= '0' && str[i] <= '9'))
			ret[i] = str[i];
		i++;
	}
	if ((ret[0] != '-' || ret[0] != '+') ||
		 (ret[0] >= '0' && ret[0] <= '0'))
		

	return (ret);
}

int			*ft_init(char **ret, char **argv, size_t size)
{
	int		i;

	i = 0;
	while (i < size / 2)
	{
		ret[i] = ft_check(argv[i]);
		i++;
	}
}

int			main(int argc, char **argv)
{
	size_t		size;
	char		**ret;

	size = (argc - 1) * 2;
	if (!(ret = (char **)malloc(sizeof(char *) * size)))
		return (-1);
	ret = ft_init(ret, argv, size);
}
