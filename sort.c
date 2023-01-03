/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 14:49:34 by nmilan            #+#    #+#             */
/*   Updated: 2023/01/03 15:57:51 by nmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_list **a, t_list **b, t_list **done)
{
	int	lst_len;

	lst_len = ft_lstsize(*a);
	*b = ft_lstnew("0");
	*done = ft_lstnew("0");
	if (lst_len <= 3)
	{
		//while (!is_sorted(a, lst_len))
			sort_short(a, b, done);
	}
	//clear_all_list(a, b, done);
}

void	sort_short(t_list **a, t_list **b, t_list **done)
{
	if (ft_atoi((*a)->content) > ft_atoi((*a)->next->content))
		swap(a, b, done, 'a');
	if (ft_atoi((*a)->content) > ft_atoi((*a)->next->next->content))
		rrotate(a, b, done, 'a');
	if ()
}

int	is_sorted(t_list **a, int lst_len)
{
	t_list	*tmp;

	tmp = *a;
	if (ft_lstsize(tmp) != lst_len)
		return (0);
	while (tmp->next)
	{
		if (ft_atoi(tmp->content) > ft_atoi(tmp->next->content))
			return (0);
		tmp = tmp->next;
	}
	while (tmp->previous)
		tmp = tmp->previous;
	return (1);
}
