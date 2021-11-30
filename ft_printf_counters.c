/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_counters.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f@student.42lisboa.com <acinca-f>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:46:16 by acinca-f@student  #+#    #+#             */
/*   Updated: 2021/11/23 09:51:51 by acinca-f@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexlen(int nbr)
{
	static int	c;

	if (nbr < 0)
		nbr = UINT_MAX + nbr + 1;
	else
		nbr = (unsigned int) nbr;
	if (nbr > 16)
	{
		c++;
		return (ft_hexlen(nbr / 16));
	}
	else
		return (1);
}
