/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:26:15 by nmilan            #+#    #+#             */
/*   Updated: 2023/01/09 12:40:08 by nmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_last(t_list **lst)
{
	t_list	*tmp;

	tmp = *lst;
	while (tmp->next)
		tmp = tmp->next;
	return (ft_atoi(tmp->content));
}

void	rev_in_tab(char *tab, int end)
{
	char	tmp;
	int		i;

	i = 0;
	while (i < end)
	{
		tmp = tab[i];
		tab[i] = tab[end];
		tab[end] = tmp;
		i++;
		end--;
	}
}

void	free_splited(char **splited)
{
	int	i;

	i = 0;
	while (splited[i])
	{
		free(splited[i]);
		i++;
	}
	free(splited);
}

void	put_value_binary(t_list *tmp, int max_bin)
{
	while (tmp)
	{
		free(tmp->content);
		tmp->content = binary_convert(tmp->rank, max_bin);
		if (!tmp->content)
			return ;
		tmp = tmp->next;
	}
}
