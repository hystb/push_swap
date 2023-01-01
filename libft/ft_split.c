/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:53:17 by nmilan            #+#    #+#             */
/*   Updated: 2022/11/14 16:30:43 by nmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	if (!*s)
		return (0);
	while (s[i])
	{
		if (s[i] == c)
		{
			count++;
			while (s[i] == c)
				i++;
		}
		i++;
	}
	return (count);
}

static int	word_size(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != c && s[i])
	{	
		i++;
		count++;
	}
	return (count);
}

static char	**malloc_error(char **strs, char *str)
{
	int	i;

	i = 0;
	while (strs[i] != NULL)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	free(str);
	return (NULL);
}

char	**put_in_strs(char *str, char c, int j)
{
	char	**strs;
	char	*s;
	int		i;
	int		words;

	i = 0;
	words = count_words(str, c);
	strs = malloc((words + 1) * sizeof(char *));
	if (!strs)
		return (malloc_error(strs, str));
	while (words--)
	{
		s = malloc((word_size(&str[i], c) + 1) * sizeof(char));
		if (!s)
			return (malloc_error(strs, str));
		ft_strlcpy(s, &str[i], word_size(&str[i], c) + 1);
		strs[j++] = s;
		i = i + word_size(&str[i], c);
		while (str[i] == c)
			i++;
	}
	strs[j] = NULL;
	free(str);
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	int		j;
	char	*str;
	char	set[2];

	if (!s)
		return (0);
	j = 0;
	set[0] = c;
	set[1] = '\0';
	str = ft_strtrim(s, set);
	if (!str)
		return (NULL);
	return (put_in_strs(str, c, j));
}
