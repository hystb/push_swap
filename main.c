/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 12:28:47 by nmilan            #+#    #+#             */
/*   Updated: 2023/01/02 14:49:01 by nmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	**a;
	t_list	**b;
	t_list	**done;
	int		i;
	int		first;

	first = 0;
	i = 0;
	a = malloc(sizeof(t_list *));
	if (!a)
		return (0);
	b = malloc(sizeof(t_list *));
	if (!b)
	{
		free (a);
		return (0);
	}
	done = malloc(sizeof(t_list *));
	if (!done)
	{
		free (a);
		free (b);
		return (0);
	}
	if (argc > 1)
	{
		while (i < argc - 1)
		{
			fill_a(argv[i + 1], a, &first);
			i++;
		}
		while ((*a)->next != NULL)
		{
			ft_printf("current : %p\n", *a);
			ft_printf("prev : %p\n", (*a)->previous);
			ft_printf("next : %p\n", (*a)->next);
			ft_printf("%s\n", (*a)->content);
			(*a) = (*a)->next;
		}
		ft_printf("current : %p\n", *a);
		ft_printf("prev : %p\n", (*a)->previous);
		ft_printf("next : %p\n", (*a)->next);
		ft_printf("%s\n", (*a)->content);
		while ((*a)->previous)
		{
			*a = (*a)->previous;
		}
		is_double_nb(a, b, done);
		sort_stack(a, b, done);
		clear_all_list(a, b, done);
	}
	else
		ft_printf("Error\n");
	return (0);
}
