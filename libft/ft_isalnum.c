/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:28:07 by nmilan            #+#    #+#             */
/*   Updated: 2022/11/08 14:39:51 by nmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int character)
{
	if ((character >= 65 && character <= 90)
		|| (character >= 48 && character <= 57)
		|| (character >= 97 && character <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
