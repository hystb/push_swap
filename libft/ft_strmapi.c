/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 13:40:58 by nmilan            #+#    #+#             */
/*   Updated: 2022/11/14 12:51:21 by nmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const	*s, char (*f)(unsigned int, char))
{
	size_t			i;
	char			*result;
	size_t			len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	i = 0;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	while (s[i] != '\0')
	{
		result[i] = (f)(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
