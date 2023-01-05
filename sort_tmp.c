/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 14:49:34 by nmilan            #+#    #+#             */
/*   Updated: 2023/01/03 15:57:51 by nmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_list **a, t_list **b, t_list **done)
{
	int	lst_len;

	lst_len = ft_lstsize(*a);
	*b = ft_lstnew("0");//to change
	*done = ft_lstnew("0");//to change
	if (lst_len <= 3)
	{
		//while (!is_sorted(a, lst_len))
			sort_short(a, b, done);
	}
	//clear_all_list(a, b, done);
}

void	sort_short(t_list **a, t_list **b, t_list **done)
{
	if (is_stack_sorted(a) == 0)
		return (0);
	if (get_value(*a) > get_value((*a)->next) && \
		get_value((*a)->next) > get_last(a))
		return (sx(a, done) + rrx(a, done));
	else if (get_value(*a) > get_value((*a)->next) && \
		get_last(a) < get_value(*a) && get_value((*a)->next) < get_last(a))
		return (rx(a, done));
	else if (get_value(*a) < get_value((*a)->next) && \
		get_last(a) > get_value(*a))
		return (rrx(a, done) + sx(a, done));
	else if (get_value(*a) > get_value((*a)->next) && \
		get_value((*a)->next) < get_last(a))
		return (sx(a, done));
	else
		return (rrx(a, done));
}

int	is_sorted(t_list **a, int lst_len)
{
	t_list	*tmp;

	tmp = *a;
	if (ft_lstsize(tmp) != lst_len)
		return (0);
	while (tmp->next)
	{
		if (ft_atoi(tmp->content) > ft_atoi(tmp->next->content))
			return (0);
		tmp = tmp->next;
	}
	while (tmp->previous)
		tmp = tmp->previous;
	return (1);
}

int	small_sort_three(t_list **a, t_list **b, t_list **done)
{
	while (stack_len(a) > 3)
	{
		if (get_value(*a) == get_lowest(a))
		{
			if (push(a, b, done))
				return (1);
		}
		else
		{
			if (do_r_rr(a, done, get_lowest(a)))
				return (1);
		}
	}
	if (small_sort_logic(a, done))
		return (1);
	return (0);
}


int	small_sort(t_list **a, t_list **b, t_list **done)
{
	if (small_sort_three(a, b, done))
		return (1);
	while ((is_stack_sorted(a) || stack_len(b) > 0))
	{
		if (push(b, a, done))
			return (1);
	}
	return (0);
}

int	get_lowest(t_list **a)
{
	t_list	*temp;
	int		value;

	value = get_value(*a);
	temp = *a;
	while (temp)
	{
		if (get_value(temp) < value)
			value = get_value(temp);
		temp = temp->next;
	}
	return (value);
}

int	is_stack_sorted(t_list **stack)
{
	t_list	*temp;
	t_list	*old;

	if (stack_len(stack) < 2)
		return (0);
	old = *stack;
	temp = (*stack)->next;
	while (temp)
	{
		if (ft_atoi(old->value) > ft_atoi(temp->value))
			return (1);
		old = old->next;
		temp = temp->next;
	}
	return (0);
}

int	big_sort(t_list **a, t_list **b, t_list **done, int len_stack)
{
	int	len;
	int	i;

	len = ft_strlen((*a)->value);
	while (len--)
	{
		i = 0;
		len_stack = stack_len(a);
		while (i++ < len_stack)
		{
			if ((*a)->value[len] == '0')
			{
				if (push(a, b, done))
					return (1);
			}
			else
			{
				if (rx(a, done))
					return (1);
			}
		}
		while (stack_len(b))
			push(b, a, done);
	}
	return (0);
}

int	sort_list(t_list **a, t_list **b, t_list **done)
{
	int	len;

	len = stack_len(a);
	if (!is_stack_sorted(a))
		return (0);
	else if (len > 25)
	{
		if (change_stack(a))
			return (1);
		return (big_sort(a, b, done, len));
	}
	else
		return (small_sort(a, b, done));
}

/*
 * Function to add to all of the element of the stack +2147483648
 */

static int	trad_stack_minus(t_list **e, int stacksize)
{
	t_list	*temp;
	long	higher;

	while (stacksize--)
	{
		temp = *e;
		higher = get_higher_cond(e, 2147483648);
		while (get_value(temp) != higher)
			temp = temp->next;
		free(temp->value);
		temp->value = ft_itoa(stacksize + 2147483648);
		if (temp->value == NULL)
			return (1);
	}
	return (0);
}

/*
 * Function to rename all of the values by they size.
 */

static int	trad_stack(t_list **e, int stacksize)
{
	t_list	*temp;
	long	higher;

	if (trad_stack_minus(e, stacksize))
		return (1);
	stacksize = stack_len(e);
	while (stacksize--)
	{
		temp = *e;
		higher = get_higher(e);
		while (get_value(temp) != higher)
			temp = temp->next;
		free(temp->value);
		temp->value = ft_itoa(stacksize);
		if (temp->value == NULL)
			return (1);
	}
	return (0);
}

/*
 * Function to convert a char (atoi) in binary, in max bytes len.
 */

static char	*convert_to_binary(char *a, int max)
{
	char	*res;
	int		nb;
	int		i;

	nb = ft_atoi(a);
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

/*
 * Function to convert all of the value of the stack to binary.
 */

static int	change_to_binary(t_list **e)
{
	t_list	*temp;
	char	*a;
	int		len;
	int		higher;

	len = 0;
	higher = get_higher(e);
	while (higher)
	{
		higher /= 2;
		len++;
	}
	temp = *e;
	while (temp)
	{
		a = temp->value;
		temp->value = convert_to_binary(temp->value, len);
		if (temp->value == NULL)
			return (1);
		temp = temp->next;
		free(a);
	}
	return (0);
}

int	change_stack(t_list **a)
{
	if (trad_stack(a, stack_len(a)))
		return (1);
	if (change_to_binary(a))
		return (1);
	return (0);
}
