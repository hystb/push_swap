/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:53:06 by nmilan            #+#    #+#             */
/*   Updated: 2022/11/14 12:43:49 by nmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		pos;
	char	*tab;

	if (!s1 || !s2)
		return (NULL);
	tab = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!(tab))
		return (NULL);
	i = 0;
	pos = 0;
	while (s1[i] != '\0')
		tab[pos++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
		tab[pos++] = s2[i++];
	tab[pos] = '\0';
	return (tab);
}
