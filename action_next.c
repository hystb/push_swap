/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_next.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 13:30:11 by nmilan            #+#    #+#             */
/*   Updated: 2023/01/03 15:44:35 by nmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate(t_list **a, t_list **b, t_list **done, char name)
{
	t_list	*tmp;
	t_list	*to_reverse;

	if (name == 'a')
	{
		to_reverse = *a;
		tmp = (*a)->next;
		to_reverse->next = NULL;
		tmp->previous = NULL;
		*a = tmp;
		ft_lstadd_back(a, to_reverse);
		ft_lstadd_back(done, ft_lstnew("ra"));
	}
	else if (name == 'b')
	{
		to_reverse = *b;
		tmp = (*b)->next;
		to_reverse->next = NULL;
		tmp->previous = NULL;
		*b = tmp;
		if (*b == NULL)
			*b = to_reverse;
		ft_lstadd_back(b, to_reverse);
		ft_lstadd_back(done, ft_lstnew("rb"));
	}
	return (0);
}

int	rotate_both(t_list **a, t_list **b, t_list **done)
{
	t_list	*tmp;
	t_list	*to_reverse;

	to_reverse = *a;
	tmp = (*a)->next;
	to_reverse->next = NULL;
	tmp->previous = NULL;
	*a = tmp;
	ft_lstadd_back(a, to_reverse);
	to_reverse = *b;
	tmp = (*b)->next;
	to_reverse->next = NULL;
	tmp->previous = NULL;
	*b = tmp;
	ft_lstadd_back(b, to_reverse);
	ft_lstadd_back(done, ft_lstnew("rr"));
	return (0);
}

int	push(t_list **a, t_list **b, t_list **done, char name)
{
	t_list	*tmp;

	if (name == 'a')
	{
		if (!*b)
			return (1);
		if ((*b)->next != NULL)
		{
			tmp = (*b)->next;
			tmp->previous = NULL;
		}
		else
			tmp = NULL;
		(*b)->next = NULL;
		ft_lstadd_front(a, *b);
		*b = tmp;
		ft_lstadd_back(done, ft_lstnew("pa"));
	}
	if (name == 'b')
	{
		if (!*a)
			return (1);
		tmp = (*a)->next;
		tmp->previous = NULL;
		(*a)->next = NULL;
		if (!*b)
		{
			*b = ft_lstnew((*a)->content);
			free(*a);
		}
		else
			ft_lstadd_front(b, *a);
		*a = tmp;
		ft_lstadd_back(done, ft_lstnew("pb"));
	}
	return (0);
}