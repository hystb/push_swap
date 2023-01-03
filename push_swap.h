/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 11:12:55 by nmilan            #+#    #+#             */
/*   Updated: 2023/01/03 15:54:19 by nmilan           ###   ########.fr       */
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
void	fill_a(char *str, t_list **a, int *first);
void	is_correct_nb(char *str);
void	put_data(char *str, t_list **a, int *first);
void	is_double_nb(t_list **a, t_list **b, t_list **done);
void	clear_all_list(t_list **a, t_list **b, t_list **done);
void	del(void *content);
void	sort(t_list **a, t_list **b, t_list **done);
void	sort_short(t_list **a, t_list **b, t_list **done);
void	swap(t_list **a, t_list **b, t_list **done, char name);
void	swap_both(t_list **a, t_list **b, t_list **done);
void	rrotate(t_list **a, t_list **b, t_list **done, char name);
void	rreverse_both(t_list **a, t_list **b, t_list **done);
int		is_sorted(t_list **a, int lst_len);

#endif
