/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f@student.42lisboa.com <acinca-f>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:14:27 by acinca-f@student  #+#    #+#             */
/*   Updated: 2021/11/23 12:14:17 by acinca-f@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	is_flag(char f)
{
	if (f == 'c')
		return (1);
	return (0);
}

//str = va_arg(args, char *);

int	length_handler(va_list args, char flag)
{
	if (flag == '%' || flag == 'c')
		return (1);
	else if (flag == 's')
		return (ft_strlen(va_arg(args, char *)));
	else if (flag == 'd' || flag == 'i')
		return (ft_strlen(ft_itoa(va_arg(args, int))));
	else if (flag == 'u')
		return (ft_strlen(ft_itoa(va_arg(args, int))));
	else if (flag == 'x' || flag == 'X')
		return (ft_hexlen(va_arg(args, unsigned int)));
	return (0);
}

void	flag_handler(va_list args, char flag)
{
	if (flag == '%')
		ft_putchar_fd('%', 0);
	else if (flag == 'c')
		ft_putchar_fd((char)va_arg(args, void *), 1);
	else if (flag == 's')
		ft_putstr_fd(va_arg(args, char *), 1);
	else if (flag == 'd' || flag == 'i')
		ft_putnbr_fd(va_arg(args, int), 1);
	else if (flag == 'u')
		ft_putunsigned(va_arg(args, unsigned int), 1);
	else if (flag == 'x')
		ft_puthex_fd(va_arg(args, unsigned int), 0, 1);
	else if (flag == 'X')
		ft_puthex_fd(va_arg(args, unsigned int), 1, 1);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		cc[1];

	i = 0;
	*cc = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			flag_handler(args, format[i + 1]);
			*cc += length_handler(args, format[i + 1]);
			i += 1;
		}
		else
		{
			ft_putchar_fd(format[i], 0);
			++*cc;
		}
		i++;
	}
	va_end(args);
	return (*cc);
}

int	main(void)
{
	int	a;
	int	b;

	a = ft_printf(" %c", '0');
	b = printf(" %c", '0');
	printf("Length %d == %d\n", b, a);
}

// 	printf("---- STRING ----\n");
// 	a = ft_printf("Hello %s\n", "World");
// 	b = printf("Hello %s\n", "World");
// 	printf("Length %d == %d\n", b, a);

// 	printf("---- NUMBER [D] ----\n");
// 	a = ft_printf("Hello %d World\n", 854004100);
// 	b = printf("Hello %d World\n", 854004100);
// 	printf("Length %d == %d\n", b, a);

// 	printf("---- NUMBER [I] ----\n");
// 	a = ft_printf("Hello %i World\n", 98744512);
// 	b = printf("Hello %i World\n", 98744512);
// 	printf("Length %d == %d\n", b, a);

// 	printf("---- NUMBER [u] ----\n");
// 	a = ft_printf("Hello %u World\n", -344);
// 	b = printf("Hello %u World\n", -344);
// 	printf("Length %d == %d\n", b, a);

// 	printf("---- HEX [x] ----\n");
// 	a = ft_printf("Hello %x World\n", 15);
// 	b = printf("Hello %x World\n", 15);
// 	printf("Length %d == %d\n", b, a);

// 	printf("---- HEX [X] ----\n");
// 	a = ft_printf("Hello %X World\n", 15);
// 	b = printf("Hello %X World\n", 15);
// 	printf("Length %d == %d\n", b, a);
