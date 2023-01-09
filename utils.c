/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 11:07:28 by nmilan            #+#    #+#             */
/*   Updated: 2023/01/09 12:27:12 by nmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	clear_all_list(t_list **a, t_list **b, t_list **done)
{
	ft_lstclear(a, *del_free);
	ft_lstclear(b, *del);
	ft_lstclear(done, *del);
	free(a);
	free(b);
	free(done);
	exit(0);
}

void	del_free(void *content)
{
	free(content);
	content = NULL;
}

void	del(void *content)
{
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
