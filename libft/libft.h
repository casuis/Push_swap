/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 02:12:39 by arthur            #+#    #+#             */
/*   Updated: 2021/11/21 19:52:49 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

long long int	ft_atoi(const char *str);
int				ft_isdigit(int c);
char			*ft_itoa(int n);
size_t			ft_strlen(const char *str);

#endif
