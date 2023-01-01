/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 12:28:47 by nmilan            #+#    #+#             */
/*   Updated: 2023/01/01 11:55:23 by nmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	**a;
	t_list	**b;
	t_list	**done;
	int		i;

	i = 0;
	a = NULL;
	b = NULL;
	done = NULL;
	create_list(a, b, done);
	if (argc > 1)
	{
		while (i < argc - 1)
		{
			fill_a(argv[i + 1], a, b, done);
			i++;
		}
		while (a != NULL)
		{
			ft_printf("%s\n", (*a)->content);
			(*a) = (*a)->next;
		}
		//sort_stack(a, b, done);
	}
	else
		ft_printf("Error\n");
	return (0);
}

void	create_list(t_list **a, t_list **b, t_list **done)
{
	a = malloc(sizeof(t_list *) * 1);
	if (!a)
		exit (0);
	b = malloc(sizeof(t_list *) * 1);
	if (!b)
	{
		free (a);
		exit (0);
	}
	done = malloc(sizeof(t_list *) * 1);
	if (!done)
	{
		free (a);
		free (b);
		exit (0);
	}
}
