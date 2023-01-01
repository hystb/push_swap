/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 11:07:28 by nmilan            #+#    #+#             */
/*   Updated: 2023/01/01 11:45:02 by nmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	clear_all_list(t_list **a, t_list **b, t_list **done)
{
	while ((*a)->previous != NULL)
		(*a) = (*a)->previous;
	ft_lstclear(a, *del);
	ft_lstclear(b, *del);
	ft_lstclear(done, *del);
	free(a);
	free(b);
	free(done);
	exit(0);
}

void	del(void *content)
{
	content = NULL;
}
