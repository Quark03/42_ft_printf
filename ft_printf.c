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

int is_flag(char f)
{
	if (f == 'c')
		return (1);
	return (0);
}

//str = va_arg(args, char *);

void flag_handler(va_list args, char flag)
{
	(void)args;
	if (flag == '%')
		ft_putchar_fd('%', 0);
	else if (flag == 'c')
		ft_putchar_fd(va_arg(args, int), 0);
	else if (flag == 's')
		ft_putstr_fd(va_arg(args, char *), 0);
}

int ft_printf(const char *format, ...)
{
	va_list args;
	int i;

	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			flag_handler(args, format[i + 1]);
			i += 2;
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

int main(void)
{
	printf("---- CHAR ----\n");
	ft_printf("Hello %corld\n", 'W');
	printf("Hello %corld\n", 'W');
	printf("---- STRING ----\n");
	ft_printf("Hello %s\n", "World");
	printf("Hello %s\n", "World");
	printf("---- NUMBER ----\n");
}
