/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f@student.42lisboa.com <acinca-f>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:14:27 by acinca-f@student  #+#    #+#             */
/*   Updated: 2021/11/17 10:06:51 by acinca-f@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/libft.h"

int	is_flag(char f)
{
	if (f == 'c')
		return (1);
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	char	*str;
	int		i;

	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && is_flag(format[i + 1]))
		{
			str = va_arg(args, char *);
			ft_putchar_fd(*str, 0);
		}
		else
		{
			ft_putchar_fd(format[i], 0);
			i++;
		}
	}
	va_end(args);
	return (1);
}

int	main(void)
{
	ft_printf("Hello World %c\n", 'a');
	printf("Hello World %c\n", 'a');
}
