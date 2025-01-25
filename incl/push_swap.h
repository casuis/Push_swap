/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 17:55:31 by arthur            #+#    #+#             */
/*   Updated: 2025/01/25 19:34:28 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "../libft/libft.h"

# define ERROR -1

typedef struct s_num
{
	int		index;
	int		nb;
	int		*binaire;
	int		bin_size;
}		t_num;

typedef struct s_arg
{
	int	y;
	int	cpt;
}		t_arg;

int		main(int argc, char **argv);
int		ft_count_arg(char *str);
int		ft_doublon_error(t_num *tab, size_t size);
int		ft_core_error(char **argv, int argc);
int		ft_second_error(char **argv, int argc);
int		ft_first_error(char **argv);
int		ft_count_char(char *str);
t_num	*ft_parse_arg(int argc, char **argv, int *size, t_num *ret);
t_num	*ft_check_max(char **buff, size_t size, t_num *tab, int argc);
int		*ft_bin_chng(int nb, t_num *num);
char	*ft_create(char *str, size_t size);
int		*ft_order(int *buff, size_t size);
char	**ft_set_buff(char **ret, char *str);
t_num	*ft_set_index(t_num *nb, size_t size);
t_num	*ft_rotate_rr(t_num *str, size_t size);
t_num	*ft_rotate_rb(t_num *str, size_t size);
t_num	*ft_rotate_ra(t_num *str, size_t size);
t_num	*ft_rev_rotate(t_num *str, int start, int end);
t_num	*ft_rotate_r(t_num *str, size_t size);
t_num	*ft_rotate_b(t_num *str, size_t size);
t_num	*ft_rotate_a(t_num *str, size_t size);
t_num	*ft_rotate(t_num *str, int start, int end);
t_num	*ft_push_b(t_num *str, size_t size);
t_num	*ft_push_a(t_num *str, size_t size);
t_num	*ft_delete(t_num *str, int pos, int stop);
t_num	*ft_push(t_num *str, t_num nw, int stop, int start);
t_num	*ft_swap_ss(t_num *str, size_t size);
t_num	*ft_swap_b(t_num *str, size_t size);
t_num	*ft_swap_a(t_num *str, size_t size);
t_num	*ft_rollback(t_num *tab, char **str, size_t size);
t_num	*ft_init(t_num *ret, char **argv, size_t size, int argc);
t_num	ft_init_b(t_num ret);
t_num	*ft_parse_init(int argc, char **argv, int *size);
size_t	ft_parse_com(t_num *tab, int y, int start, int end);
t_num	*ft_parse_act_little(t_num *tab, size_t size, char **str);
t_num	*ft_parse_act_little_scnd(t_num *tab, size_t size, char **str);
char	*ft_check(char *str);
void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_free_buff(char **buff, size_t size);
void	ft_free_tab(t_num *tab, size_t size);
char	*ft_strconc(char *str1, char *str2);
int		ft_parse_core(int argc, int *size);
t_num	*ft_core(t_num *tab, size_t size, char **str);
t_num	*ft_core_little(t_num *tab, size_t size, char **ret);
int		ft_test(t_num *tab, size_t size);
t_num	*ft_free_max(t_num *tab);

#endif
