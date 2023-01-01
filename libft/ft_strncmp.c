/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:33:21 by nmilan            #+#    #+#             */
/*   Updated: 2022/11/13 18:46:39 by nmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	int				result;

	i = 0;
	result = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && result == 0 && n--)
	{
		result = (unsigned char) s1[i] - (unsigned char) s2[i];
		i++;
	}
	if (s1[i] == '\0' && s2[i] != '\0' && n)
		result = 0 - (unsigned char) s2[i];
	if (s2[i] == '\0' && s1[i] != '\0' && n)
		result = (unsigned char) s1[i] - 0;
	return (result);
}
