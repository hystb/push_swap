/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 12:33:51 by nmilan            #+#    #+#             */
/*   Updated: 2023/01/05 17:21:24 by nmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_big(t_list **a/*, t_list **b, t_list **done*/)
{
	rank_value(a);
	while ((*a))
	{
		ft_printf("%d\n", (*a)->rank);
		ft_printf("%s\n", (*a)->content);
		(*a) = (*a)->next;
	}
	//convert en binaire, et bien free ancien content
	//sort_binary(a, b, done, 0);
}

/*void	sort_binary(t_list **a, t_list **b, t_list **done, int len_stack)
{
	int	len;
	int	i;

	len = ft_strlen((*a)->content);
	while (len--)
	{
		i = 0;
		len_stack = stack_len(a);
		while (i++ < len_stack)
		{
			if ((*a)->content[len] == '0')
			{
				if (push(a, b, done, 'b'))
					return (1);
			}
			else
			{
				if (rx(a, done))
					return (1);
			}
		}
		while (stack_len(b))
			push(b, a, done, 'a');
	}
}*/

void	rank_value(t_list **a)
{
	int		rank;
	t_list	*tmp;
	t_list	*tmp_cmp;
	t_list	*mem_tmp;

	tmp = *a;
	tmp_cmp = *a;
	mem_tmp = *a;
	while (tmp)
	{
		rank = 0;
		tmp_cmp = mem_tmp;
		while (tmp_cmp)
		{
			if (get_value(tmp_cmp) < get_value(tmp))
				rank++;
			tmp_cmp = tmp_cmp->next;
		}
		tmp->rank = rank;
		tmp = tmp->next;
	}
}
