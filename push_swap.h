/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 11:12:55 by nmilan            #+#    #+#             */
/*   Updated: 2023/01/01 11:55:04 by nmilan           ###   ########.fr       */
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
void	fill_a(char *str, t_list **a, t_list **b, t_list **done);
void	is_correct_nb(char *str, int *need_split);
void	put_data(char *str, t_list **a, int *need_split);
void	is_double_nb(t_list **a, t_list **b, t_list **done);
void	clear_all_list(t_list **a, t_list **b, t_list **done);
void	del(void *content);

#endif
