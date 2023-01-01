/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:40:36 by nmilan            #+#    #+#             */
/*   Updated: 2023/01/01 11:43:27 by nmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*address_tmp;

	if (!lst || !del)
		return ;
	tmp = *lst;
	while (tmp)
	{
		address_tmp = tmp->next;
		del(tmp->content);
		free(tmp);
		tmp = address_tmp;
	}
	*lst = NULL;
}
