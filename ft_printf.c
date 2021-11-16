/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f@student.42lisboa.com <acinca-f>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:14:27 by acinca-f@student  #+#    #+#             */
/*   Updated: 2021/11/16 16:15:12 by acinca-f@student ###   ########.fr       */
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

int	ft_printf(const char *args, ...)
{
	char	*string;
	int		i;
	va_list	subs;

	i = 0;
	va_start(subs, args);
	while (i < 10)
	{
		printf(">>>%c\n", va_arg(subs, int));
		i++;
	}
	va_end(subs);
	return (1);
}

int	main(void)
{
	ft_printf("Hello World %c\n", 'a');
	printf("Hello World %c\n", 'a');
}
