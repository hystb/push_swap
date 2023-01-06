/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 12:28:47 by nmilan            #+#    #+#             */
/*   Updated: 2023/01/06 15:36:39 by nmilan           ###   ########.fr       */
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
	if (argc > 1 && argv[1][0] != '\0')
	{
		a = malloc(sizeof(t_list *));
		b = malloc(sizeof(t_list *));
		done = malloc(sizeof(t_list *));
		alloc_control(a, b, done);
		while (i < argc - 1)
		{
			fill_a(argv[i + 1], a);
			i++;
		}
		is_double_nb(a, b, done);
		sort(a, b, done);
	}
	return (0);
}

void	alloc_control(t_list **a, t_list **b, t_list **done)
{
	if (!a || !b || !done)
	{
		if (a)
			free(a);
		if (b)
			free(b);
		if (done)
			free(done);
		exit(1);
	}
	*a = NULL;
	*b = NULL;
	*done = NULL;
}
