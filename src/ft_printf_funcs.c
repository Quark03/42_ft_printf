/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_funcs.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f@student.42lisboa.com <acinca-f>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 11:45:47 by acinca-f@student  #+#    #+#             */
/*   Updated: 2021/12/06 12:45:51 by acinca-f@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putunsigned(unsigned int nbr, int fd, int *len)
{
	if (nbr >= 0 && nbr < 10)
	{
		nbr = nbr + '0';
		*len += ft_putchar_fd(nbr, fd);
	}
	else
	{
		ft_putunsigned(nbr / 10, fd, len);
		nbr = nbr % 10 + '0';
		*len += ft_putchar_fd(nbr, fd);
	}
}

void	ft_puthex_fd(unsigned int nbr, int to_upper, int fd, int *len)
{
	if (nbr >= 16)
		ft_puthex_fd(nbr / 16, to_upper, fd, len);
	if (to_upper)
		*len += ft_putchar_fd("0123456789ABCDEF"[nbr % 16], fd);
	else
		*len += ft_putchar_fd("0123456789abcdef"[nbr % 16], fd);
}

void	ft_put_ptr(uintptr_t nbr, int *len)
{
	if (nbr >= 16)
	{
		ft_put_ptr(nbr / 16, len);
		ft_put_ptr(nbr % 16, len);
	}
	else
		*len += ft_putchar_fd("0123456789abcdef"[nbr % 16], 1);
}
