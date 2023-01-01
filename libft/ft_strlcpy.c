/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:33:02 by nmilan            #+#    #+#             */
/*   Updated: 2022/11/09 14:47:38 by nmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t			src_len;
	size_t			len_overwrite;

	src_len = ft_strlen(src);
	len_overwrite = 0;
	if (size == 0)
		return (src_len);
	else if (src_len >= size)
		len_overwrite = size - 1;
	else
		len_overwrite = src_len;
	ft_memmove(dst, src, len_overwrite);
	dst[len_overwrite] = '\0';
	return (src_len);
}
