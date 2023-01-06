/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 11:12:55 by nmilan            #+#    #+#             */
/*   Updated: 2023/01/06 14:06:33 by nmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdarg.h>
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

void	create_list(t_list **a, t_list **b, t_list **done);
void	fill_a(char *str, t_list **a);
void	is_correct_nb(char *str);
void	put_data(char *str, t_list **a);
void	is_double_nb(t_list **a, t_list **b, t_list **done);
void	clear_all_list(t_list **a, t_list **b, t_list **done);
void	del(void *content);
void	sort(t_list **a, t_list **b, t_list **done);
void	sort_short(t_list **a, t_list **b, t_list **done);
int		swap(t_list **a, t_list **b, t_list **done, char name);
void	swap_both(t_list **a, t_list **b, t_list **done);
int		rrotate(t_list **a, t_list **b, t_list **done, char name);
void	rrotate_both(t_list **a, t_list **b, t_list **done);
int		is_sorted(t_list **a, int lst_len);
int		rotate(t_list **a, t_list **b, t_list **done, char name);
int		rotate_both(t_list **a, t_list **b, t_list **done);
int		push_a(t_list **a, t_list **b, t_list **done);
int		push_b(t_list **a, t_list **b, t_list **done);
void	alloc_control(t_list **a, t_list **b, t_list **done);
int		short_three(t_list **a, t_list **b, t_list **done);
int		get_value(t_list *lst);
int		get_lowest(t_list **lst);
int		get_last(t_list **lst);
int		r_or_rr(t_list **a, t_list **b, t_list **done, int low_value);
int		sort_three(t_list **a, t_list **b, t_list **done);
void	sort_big(t_list **a, t_list **b, t_list **done);
void	sort_binary(t_list **a, t_list **b, t_list **done, int len_stack);
void	rank_value(t_list **a);
void	prepare_nb(t_list **a);
void	rev_in_tab(char *tab, int end);
char	*binary_convert(int nb, int max);


#endif
