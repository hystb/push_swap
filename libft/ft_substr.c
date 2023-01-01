/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:03:15 by nmilan            #+#    #+#             */
/*   Updated: 2022/11/14 13:53:11 by nmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*str;
	unsigned int	size;
	unsigned int	len_src;

	i = 0;
	j = start;
	if (!s)
		return (NULL);
	len_src = ft_strlen(s);
	if (len_src < start)
		size = 1;
	else if (len > len_src)
		size = len_src - start;
	else
		size = len + 1;
	str = (char *) malloc(sizeof(char) * size);
	if (!str)
		return (NULL);
	while (len-- && s[j] != '\0' && len_src > start)
		str[i++] = s[j++];
	str[i] = '\0';
	return (str);
}
