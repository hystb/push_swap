/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:26:49 by nmilan            #+#    #+#             */
/*   Updated: 2022/11/15 16:37:01 by nmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*str_src;
	char		*str_dst;

	if (!dst && !src)
		return (dst);
	str_dst = dst;
	str_src = src;
	if (str_dst < str_src)
	{
		while (len-- > 0)
			*str_dst++ = *str_src++;
	}
	else
	{
		str_src = src + (len - 1);
		str_dst = dst + (len - 1);
		while (len-- > 0)
			*str_dst-- = *str_src--;
	}
	return (dst);
}
