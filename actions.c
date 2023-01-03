/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 13:30:11 by nmilan            #+#    #+#             */
/*   Updated: 2023/01/03 15:44:35 by nmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **a, t_list **b, t_list **done, char name)
{
	t_list	*tmp;
	t_list	*swaped;

	if (name == 'a')
	{
		tmp = (*a)->content;
		swaped = (*a)->next->content;
		(*a)->next->content = tmp;
		(*a)->content = swaped;
		ft_lstadd_back(done, ft_lstnew("sa"));
	}
	else if (name == 'b')
	{
		tmp = (*b)->content;
		swaped = (*b)->next->content;
		(*b)->next->content = tmp;
		(*b)->content = swaped;
		ft_lstadd_back(done, ft_lstnew("sb"));
	}
	else if (name == 'c')
	{
		swap_both(a, b, done);
	}
}

void	swap_both(t_list **a, t_list **b, t_list **done)
{
	t_list	*tmp;
	t_list	*swaped;

	tmp = (*a)->content;
	swaped = (*a)->next->content;
	(*a)->next->content = tmp;
	(*a)->content = swaped;
	tmp = (*b)->content;
	swaped = (*b)->next->content;
	(*b)->next->content = tmp;
	(*b)->content = swaped;
	ft_lstadd_back(done, ft_lstnew("ss"));
}

void	rrotate(t_list **a, t_list **b, t_list **done, char name)
{
	t_list	*tmp;
	t_list	*to_reverse;

	if (name == 'a')
	{
		to_reverse = ft_lstlast(*a);
		tmp = to_reverse->previous;
		to_reverse->previous = NULL;
		tmp->next = NULL;
		ft_lstadd_front(a, to_reverse);
		ft_lstadd_back(done, ft_lstnew("rra"));
	}
	else if (name == 'b')
	{
		to_reverse = ft_lstlast(*b);
		tmp = to_reverse->previous;
		to_reverse->previous = NULL;
		tmp->next = NULL;
		ft_lstadd_front(b, to_reverse);
		ft_lstadd_back(done, ft_lstnew("rra"));
	}
	else if (name == 'c')
		rreverse_both(a, b, done);
}

void	rreverse_both(t_list **a, t_list **b, t_list **done)
{
	t_list	*tmp;
	t_list	*to_reverse;

	to_reverse = ft_lstlast(*a);
	tmp = to_reverse->previous;
	to_reverse->previous = NULL;
	tmp->next = NULL;
	ft_lstadd_front(a, to_reverse);
	to_reverse = ft_lstlast(*b);
	tmp = to_reverse->previous;
	to_reverse->previous = NULL;
	tmp->next = NULL;
	ft_lstadd_front(b, to_reverse);
	ft_lstadd_back(done, ft_lstnew("rrr"));
}
