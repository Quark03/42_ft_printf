/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f@student.42lisboa.com <acinca-f>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 09:28:31 by acinca-f@student  #+#    #+#             */
/*   Updated: 2021/10/20 09:47:37 by acinca-f@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("Res <%d> <0> \n", ft_isdigit('g'));
// 	printf("Res <%d> <0> \n", ft_isdigit('K'));
// 	printf("Res <%d> <0> \n", ft_isdigit('\n'));
// 	printf("Res <%d> <0> \n", ft_isdigit('%'));
// 	printf("Res <%d> <1> \n", ft_isdigit('4'));
// }
