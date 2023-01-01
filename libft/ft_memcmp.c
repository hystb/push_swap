/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:00:38 by nmilan            #+#    #+#             */
/*   Updated: 2022/11/13 18:41:59 by nmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*str1;
	const char	*str2;
	int			result;

	str1 = s1;
	str2 = s2;
	result = 0;
	while (result == 0 && n--)
	{
		result = (unsigned const char) *str1 - (unsigned const char) *str2;
		str1++;
		str2++;
	}
	return (result);
}
