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

void	fill_a(char *str, t_list **a)
{
	is_correct_nb(str);
	put_data(str, a);
}

void	is_correct_nb(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9')
			&& !(str[i] == ' ' || str[i] == '-'))
		{
			ft_putstr_fd("Error\n", 2);
			exit(0);
		}
		if (i != 0 && str[i] == '-' && (!(str[i + 1] >= '0'
					&& str[i + 1] <= '9') || str[i - 1] != ' '))
		{
			ft_putstr_fd("Error\n", 2);
			exit(0);
		}
		i++;
	}
}

void	put_data(char *str, t_list **a)
{
	char	**splited;
	int		i;

	i = 0;
	splited = ft_split(str, ' ');
	if (!splited)
	{
		free_splited(splited);
		exit (1);
	}
	control_str(splited);
	while (splited[i] != NULL)
	{
		if (*a == NULL)
		{
			*a = ft_lstnew(splited[i]);
			if (!*a)
				return ;
		}
		else
			ft_lstadd_back(a, ft_lstnew(splited[i]));
		i++;
	}
	free(splited);
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
			if (found > 1 || ft_atoi(tmp->content) > INT_MAX
				|| ft_atoi(tmp->content) < INT_MIN)
			{
				ft_putstr_fd("Error\n", 2);
				clear_all_list(a, b, done);
			}
			tmp = tmp->next;
		}
		tmp_cmp = tmp_cmp->next;
	}
}

void	control_str(char **splited)
{
	int	i;

	i = 0;
	while (splited[i])
	{
		if (ft_strlen(splited[i]) > 11)
		{
			free_splited(splited);
			ft_putstr_fd("Error\n", 2);
			exit (0);
		}
		else if (ft_atoi(splited[i]) > INT_MAX || ft_atoi(splited[i]) < INT_MIN)
		{
			free_splited(splited);
			ft_putstr_fd("Error\n", 2);
			exit (0);
		}
		else if (splited[i][0] == '-' && splited[i][1] == '\0')
		{
			free_splited(splited);
			ft_putstr_fd("Error\n", 2);
			exit (0);
		}
		i++;
	}	
}
