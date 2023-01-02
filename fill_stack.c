/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 12:35:51 by nmilan            #+#    #+#             */
/*   Updated: 2022/12/29 14:15:17 by nmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_a(char *str, t_list **a, int *first)
{
	int	need_split;

	need_split = 0;
	is_correct_nb(str, &need_split);
	put_data(str, a, &need_split, first);
}

void	is_correct_nb(char *str, int *need_split)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9')
			&& !(str[i] == ' ' || str[i] == '-'))
		{
			ft_printf("Error\n");
			exit(0);
		}
		if (i != 0 && str[i] == ' '
			&& ((str[i - 1] >= '0' && str[i - 1] <= '9') || str[i] == ' ')
			&& ((str[i + 1] >= '0' && str[i + 1] <= '9') || str[i + 1] == '-'
				|| str[i] == ' ') && *need_split != 1)
			*need_split = 1;
		if (i != 0 && str[i] == '-' && (!(str[i + 1] >= '0'
					&& str[i + 1] <= '9') || str[i - 1] != ' '))
		{
			ft_printf("Error\n");
			exit(0);
		}
		i++;
	}
}

void	put_data(char *str, t_list **a, int *need_split, int *first)
{
	char	**splited;
	int		i;

	i = 0;
	if (need_split == 0)
	{
		if ((*first)++ == 0)
			*a = ft_lstnew(str);
		else
			ft_lstadd_back(a, ft_lstnew(str));
	}
	else
	{
		splited = ft_split(str, ' ');
		while (splited[i] != NULL)
		{
			if ((*first)++ == 0)
				*a = ft_lstnew(str);
			else
				ft_lstadd_back(a, ft_lstnew(splited[i]));
			i++;
		}
	}
}

void	is_double_nb(t_list **a, t_list **b, t_list **done)
{
	t_list	*tmp;
	t_list	*tmp_cmp;
	t_list	*first_node;
	int		found;

	tmp_cmp = *a;
	first_node = *a;
	while (tmp_cmp)
	{
		tmp = *a;
		found = 0;
		while (tmp)
		{
			if (ft_atoi(tmp->content) == ft_atoi(tmp_cmp->content))
				found++;
			if (found > 1)
			{
				ft_printf("Error\n");
				clear_all_list(a, b, done);
			}
			tmp = tmp->next;
		}
		tmp_cmp = tmp_cmp->next;
	}
}
