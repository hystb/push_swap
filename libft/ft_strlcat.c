/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:32:52 by nmilan            #+#    #+#             */
/*   Updated: 2022/11/13 17:31:09 by nmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	size_t			size_dst;
	size_t			size_src;

	i = 0;
	if ((!dst || !src) && !size)
		return (0);
	size_dst = ft_strlen(dst);
	size_src = ft_strlen(src);
	if (size <= 0)
		return (size_src);
	if (size < size_dst)
		return (size + size_src);
	while (src[i] != '\0' && size > i + size_dst + 1)
	{
		dst[i + size_dst] = src[i];
		i++;
	}
	dst[i + size_dst] = '\0';
	return (size_dst + size_src);
}
