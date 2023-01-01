/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:58:21 by nmilan            #+#    #+#             */
/*   Updated: 2022/11/09 17:37:15 by nmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	c = (unsigned char) c;
	while (str[i] != '\0')
	{
		if (c == str[i])
			return ((char *)(&str[i]));
		i++;
	}
	if (c == str[i])
		return ((char *)(&str[i]));
	return (NULL);
}
