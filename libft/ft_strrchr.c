/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:10:50 by nmilan            #+#    #+#             */
/*   Updated: 2022/11/09 17:33:54 by nmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	c = (unsigned char) c;
	while (str[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (c == str[i])
			return ((char *)(&str[i]));
		i--;
	}
	return (NULL);
}
