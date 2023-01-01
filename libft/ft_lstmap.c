/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:01:57 by nmilan            #+#    #+#             */
/*   Updated: 2022/11/15 16:06:26 by nmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !f)
		return (NULL);
	tmp = ft_lstnew(f(lst->content));
	if (!tmp)
		return (NULL);
	lst = lst->next;
	while (lst)
	{
		ft_lstadd_back(&tmp, ft_lstnew(f(lst->content)));
		if (!lst)
		{
			ft_lstclear(&tmp, del);
			return (NULL);
		}
		lst = lst->next;
	}
	return (tmp);
}
