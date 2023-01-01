/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:32:29 by nmilan            #+#    #+#             */
/*   Updated: 2022/11/15 16:02:18 by nmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size_int(int n)
{
	int	i;
	int	nb;

	i = 0;
	nb = n;
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

static void	ft_rev_in_tab(char *str, int size)
{
	int		i;
	char	tmp;
	int		end;

	i = 0;
	end = size - 1;
	while (i < end)
	{
		tmp = str[i];
		str[i] = str[end];
		str[end] = tmp;
		i++;
		end--;
	}
}

static char	*ft_put_in_str(int n)
{
	int		i;
	int		size;
	char	*str;

	i = 0;
	size = ft_size_int(n);
	str = (char *) malloc((size + 1) * sizeof(*str));
	if (!str)
		return (NULL);
	while (i < size)
	{
		str[i] = ((n % 10) + 48);
		n = n / 10;
		i++;
	}
	str[i] = '\0';
	ft_rev_in_tab(str, size);
	return (str);
}

static char	*ft_put_in_min_str(int n)
{
	int		i;
	int		size;
	char	*str;

	i = 0;
	size = ft_size_int(n);
	str = (char *) malloc ((size + 2) * sizeof(*str));
	if (!str)
		return (NULL);
	while (i < size)
	{
		str[i] = ((n % 10) + 48);
		n = n / 10;
		i++;
	}
	str[i] = '-';
	i++;
	str[i] = '\0';
	ft_rev_in_tab(str, size + 1);
	return (str);
}

char	*ft_itoa(int n)
{
	char	*result;

	if (n > 0)
		return (ft_put_in_str(n));
	else if (n == 0)
	{
		result = (char *) malloc(sizeof(char) * 2);
		if (!result)
			return (NULL);
		ft_strlcpy(result, "0", 2);
		return (result);
	}
	else if (n == -2147483648)
	{
		result = (char *) malloc(sizeof(char) * 12);
		if (!result)
			return (NULL);
		ft_strlcpy(result, "-2147483648", 12);
		return (result);
	}
	else
		return (ft_put_in_min_str(-n));
}
