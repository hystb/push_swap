/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:19:45 by nmilan            #+#    #+#             */
/*   Updated: 2022/12/29 11:35:28 by nmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_end(char const *s1, char const *set)
{
	int	count;
	int	i;
	int	j;
	int	found;

	count = 0;
	i = (ft_strlen(s1) - 1);
	j = 0;
	found = 0;
	while (i >= 0)
	{
		while (set[j] != '\0')
		{
			if (set[j] == s1[i])
				count++;
			j++;
		}
		j = 0;
		if (count > found)
			found++;
		else
			return (count);
		i--;
	}
	return (count);
}

int	count_start(char const *s1, char const *set)
{
	int	count;
	int	i;
	int	j;
	int	found;

	count = 0;
	i = 0;
	j = 0;
	found = 0;
	while (s1[i] != '\0')
	{
		while (set[j] != '\0')
		{
			if (set[j] == s1[i])
				count++;
			j++;
		}
		j = 0;
		if (count > found)
			found++;
		else
			return (count);
		i++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		size;
	int		start;
	int		end;

	if (!s1 || !set)
		return (NULL);
	end = count_end(s1, set);
	start = count_start(s1, set);
	size = ft_strlen(s1) - start - end;
	if (size <= 0)
	{
		str = malloc(sizeof(char) * 1);
		if (!str)
			return (NULL);
		str[0] = '\0';
	}
	else
		str = ft_substr(s1, start, size);
	return (str);
}
