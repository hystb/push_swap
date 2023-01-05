/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 14:49:34 by nmilan            #+#    #+#             */
/*   Updated: 2023/01/05 16:59:25 by nmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_list **a, t_list **b, t_list **done)
{
	int	lst_len;

	lst_len = ft_lstsize(*a);
	*done = ft_lstnew("0");
	if (lst_len <= 2)
	{
		sort_short(a, b, done);
	}
	else
		sort_big(a/*, b, done*/);
	/**done = (*done)->next;
	while (*done)
	{
		ft_printf("%s\n", (*done)->content);
		*done = (*done)->next;
	}*/
	//clear_all_list(a, b, done);
}

void	sort_short(t_list **a, t_list **b, t_list **done)
{
	while (ft_lstsize(*a) > 3)
	{
		if (get_value(*a) == get_lowest(a))
			push(a, b, done, 'b');
		else
			r_or_rr(a, b, done, get_lowest(a));
	}
	sort_three(a, b, done);
	while (*b)
	{
		push(a, b, done, 'a');
	}
}

int	sort_three(t_list **a, t_list **b, t_list **done)
{
	if (is_sorted(a, ft_lstsize(*a)) == 1)
		return (0);
	if (get_value(*a) > get_value((*a)->next) && \
		get_value((*a)->next) > get_last(a))
		return (swap(a, b, done, 'a') + rrotate(a, b, done, 'a'));
	else if (get_value(*a) > get_value((*a)->next) && \
		get_last(a) < get_value(*a) && get_value((*a)->next) < get_last(a))
		return (rotate(a, b, done, 'a'));
	else if (get_value(*a) < get_value((*a)->next) && \
		get_last(a) > get_value(*a))
		return (rrotate(a, b, done, 'a') + swap(a, b, done, 'a'));
	else if (get_value(*a) > get_value((*a)->next) && \
		get_value((*a)->next) < get_last(a))
		return (swap(a, b, done, 'a'));
	else
		return (rrotate(a, b, done, 'a'));
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

int	r_or_rr(t_list **a, t_list **b, t_list **done, int low_value)
{
	t_list	*tmp;
	int		pos;

	pos = 0;
	tmp = *a;
	while (get_value(tmp) != low_value)
	{
		pos++;
		tmp = tmp->next;
	}
	if (pos > (ft_lstsize(*a) / 2))
		rrotate(a, b, done, 'a');
	else
		rotate(a, b, done, 'a');
	return (0);
}
