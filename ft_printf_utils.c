/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f@student.42lisboa.com <acinca-f>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 08:40:43 by acinca-f@student  #+#    #+#             */
/*   Updated: 2021/11/23 09:46:54 by acinca-f@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsigned(unsigned int nbr, int fd)
{
	if (nbr < 0)
	{
		nbr = UINT_MAX + nbr + 1;
	}
	if (nbr >= 0 && nbr < 10)
	{
		nbr = nbr + '0';
		ft_putchar_fd(nbr, fd);
	}
	else
	{
		ft_putunsigned(nbr / 10, fd);
		nbr = nbr % 10 + '0';
		ft_putchar_fd(nbr, fd);
	}
}

void	ft_puthex_fd(int nbr, int to_upper, int fd)
{
	if (nbr < 0)
		nbr = UINT_MAX + nbr + 1;
	else
		nbr = (unsigned int) nbr;
	if (nbr > 16)
		ft_puthex_fd(nbr / 16, to_upper, fd);
	if (to_upper)
		ft_putchar_fd("0123456789ABCDEF"[nbr % 16], fd);
	else
		ft_putchar_fd("0123456789abcdef"[nbr % 16], fd);
}
