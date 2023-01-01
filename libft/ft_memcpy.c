/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:05:41 by nmilan            #+#    #+#             */
/*   Updated: 2022/11/13 17:34:04 by nmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*str_src;
	char		*str_dst;

	str_src = src;
	str_dst = dst;
	if (src && dst)
	{
		while (n > 0)
		{
			*str_dst = *str_src;
			str_dst++;
			str_src++;
			n--;
		}
	}
	return (dst);
}
