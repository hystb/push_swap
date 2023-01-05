/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 11:07:28 by nmilan            #+#    #+#             */
/*   Updated: 2023/01/05 13:55:02 by nmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	clear_all_list(t_list **a, t_list **b, t_list **done)
{
	ft_lstclear(a, *del);
	free(a);
	free(b);
	free(done);
	exit(0);
}

void	del(void *content)
{
	free(content);
	content = NULL;
}

int	get_value(t_list *lst)
{
	return (ft_atoi(lst->content));
}

int	get_lowest(t_list **lst)
{
	t_list	*tmp;
	int		lowest;
	int		value;

	lowest = INT_MAX;
	tmp = *lst;
	while (tmp)
	{
		value = get_value(tmp);
		if (lowest > value)
			lowest = value;
		tmp = tmp->next;
	}
	return (lowest);
}

int	get_last(t_list **lst)
{
	t_list	*tmp;

	tmp = *lst;
	while (tmp->next)
		tmp = tmp->next;
	return (ft_atoi(tmp->content));
}
