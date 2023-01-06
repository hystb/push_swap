/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 12:33:51 by nmilan            #+#    #+#             */
/*   Updated: 2023/01/06 14:15:30 by nmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_big(t_list **a, t_list **b, t_list **done)
{
	rank_value(a);
	prepare_nb(a);
	sort_binary(a, b, done, 0);
}

void	sort_binary(t_list **a, t_list **b, t_list **done, int len_stack)
{
	int		len;
	int		i;

	len = ft_strlen((*a)->content);
	while (len--)
	{
		i = 0;
		len_stack = ft_lstsize(*a);
		while (i++ < len_stack)
		{
			if (ft_memcmp((*a)->content + len, "0", 1) == 0)
				push_b(a, b, done);
			else
				rotate(a, b, done, 'a');
		}
		while (ft_lstsize(*b))
			push_a(a, b, done);
	}
}

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

char	*binary_convert(int nb, int max)
{
	char	*res;
	int		i;

	res = malloc(sizeof(char) * (max + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (max--)
	{
		res[i++] = (nb % 2) + '0';
		nb /= 2;
	}
	res[i] = '\0';
	rev_in_tab(res, i - 1);
	return (res);
}

void	prepare_nb(t_list **a)
{
	t_list	*tmp;
	t_list	*tmp_max;
	int		max;

	tmp_max = *a;
	tmp = *a;
	max = tmp->rank;
	while (tmp_max)
	{
		if (tmp_max->rank > max)
			max = tmp_max->rank;
		tmp_max = tmp_max->next;
	}
	while (tmp)
	{
		free(tmp->content);
		tmp->content = binary_convert(tmp->rank, max);
		tmp = tmp->next;
	}
}
