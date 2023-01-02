/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 11:07:28 by nmilan            #+#    #+#             */
/*   Updated: 2023/01/02 14:47:04 by nmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	clear_all_list(t_list **a, t_list **b, t_list **done)
{
	t_list	*tmp;

	ft_lstclear(a, *del);
	tmp = (*a)->next;
	free(tmp);
	free(a);
	free(b);
	free(done);
	exit(0);
}

void	del(void *content)
{
	content = NULL;
}
