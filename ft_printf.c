/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f@student.42lisboa.com <acinca-f>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:14:27 by acinca-f@student  #+#    #+#             */
/*   Updated: 2021/12/06 08:55:26 by acinca-f@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	flag_handler(va_list args, char flag)
{
	int	len;

	len = 0;
	if (flag == '%')
		len += ft_putchar_fd('%', 1);
	else if (flag == 'c')
		len += print_char((char) va_arg(args, void *));
	else if (flag == 's')
		ft_putstring(va_arg(args, char *));
	else if (flag == 'd' || flag == 'i')
		ft_putnbr_fd(va_arg(args, int), 1);
	else if (flag == 'u')
		ft_putunsigned(va_arg(args, unsigned int), 1);
	else if (flag == 'x')
		ft_puthex_fd(va_arg(args, unsigned int), 0, 1);
	else if (flag == 'X')
		ft_puthex_fd(va_arg(args, unsigned int), 1, 1);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		cc[1];
	char	*ptr;

	i = 0;
	*cc = 0;
	va_start(args, format);
	ptr = (char *)format;
	while (format[i])
	{
		if (*ptr != '%')
			*cc += ft_putchar_fd(ptr[0], 1);
		else
		{
			*cc += flag_handler(args, ptr[1]);
			ptr++;
		}
		i++;
		ptr++;
	}
	va_end(args);
	return (*cc);
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = ft_printf("Hello %s\n", "World");
// 	printf("\n---\n");
// 	b = printf("Hello %s\n", "World");
// 	printf("Length %d == %d\n", b, a);
// }

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
