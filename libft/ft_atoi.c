/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f@student.42lisboa.com <acinca-f>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:05:31 by acinca-f@student  #+#    #+#             */
/*   Updated: 2021/10/25 09:20:07 by acinca-f@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	else if (c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		sign;
	long	r;

	r = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		r = r * 10 + *str - '0';
		str++;
	}
	return (sign * (int)r);
}

// int	main(void)
// {
// 	int	ori;
// 	int	pro;

// 	ori = atoi("  -346755abc");
// 	pro = ft_atoi("  -346755abc");
// 	printf("Original <%d> | Project <%d> \n", ori, pro);
// }
