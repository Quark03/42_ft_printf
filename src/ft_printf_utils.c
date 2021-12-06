/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f@student.42lisboa.com <acinca-f>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 09:40:59 by acinca-f@student  #+#    #+#             */
/*   Updated: 2021/12/06 12:42:56 by acinca-f@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_string(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	while (str[i])
	{
		ft_putchar_fd(str[i], 1);
		i++;
	}
	return (i);
}

int	print_number(int nbr)
{
	int		len;
	char	*str;

	len = 0;
	str = ft_itoa(nbr);
	len += print_string(str);
	free(str);
	return (len);
}

int	print_unsigned(unsigned int nbr)
{
	int		len;

	len = 0;
	ft_putunsigned(nbr, 1, &len);
	return (len);
}

int	print_hex(int nbr, int to_upper)
{
	int	len;

	len = 0;
	ft_puthex_fd((unsigned int)nbr, to_upper, 1, &len);
	return (len);
}

int	print_pointer(unsigned long ptr)
{
	int	len;

	len = 0;
	len += print_string("0x");
	if (ptr == 0)
		len += ft_putchar_fd('0', 1);
	else
		ft_put_ptr(ptr, &len);
	return (len);
}
