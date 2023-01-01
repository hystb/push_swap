/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:34:40 by nmilan            #+#    #+#             */
/*   Updated: 2022/12/29 14:55:35 by nmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

static void	ft_put_in_nb(int nb, int minus, int fd)
{
	int		i;
	char	table_num[12];

	i = 0;
	while (nb > 0)
	{
		table_num[i] = (nb % 10) + 48;
		nb = nb / 10;
		i++;
	}
	if (minus == 1)
		table_num[i] = '-';
	ft_rev_in_tab(table_num, ft_strlen(table_num));
	ft_putstr_fd_lib(table_num, fd);
}

void	ft_putnbr_fd_lib(int nb, int fd)
{
	int	minus;

	minus = 0;
	if (nb > 0)
	{
		ft_put_in_nb(nb, minus, fd);
	}
	else if (nb < 0 && nb != -2147483648)
	{
		nb = -nb;
		minus = 1;
		ft_put_in_nb(nb, minus, fd);
	}
	else if (nb == 0)
	{
		ft_putchar_fd_lib('0', fd);
	}
	else
	{
		write (fd, "-2147483648", 11);
	}
}
