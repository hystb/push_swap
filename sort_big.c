/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 12:33:51 by nmilan            #+#    #+#             */
/*   Updated: 2023/01/09 13:11:47 by nmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_big(t_list **a, t_list **b, t_list **done)
{
	t_list	*tmp;

	tmp = *a;
	rank_value(a);
	prepare_nb(a);
	while (tmp)
	{
		if (!tmp->content)
			clear_all_list(a, b, done);
		tmp = tmp->next;
	}
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
				rotate_a(a, done);
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
	int		max_bin;

	tmp_max = *a;
	tmp = *a;
	max = tmp->rank;
	max_bin = 0;
	while (tmp_max)
	{
		if (tmp_max->rank > max)
			max = tmp_max->rank;
		tmp_max = tmp_max->next;
	}
	while (max > 0)
	{
		max_bin++;
		max /= 2;
	}
	put_value_binary(tmp, max_bin);
}
