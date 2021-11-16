/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f@student.42lisboa.com <acinca-f>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 09:47:27 by acinca-f@student  #+#    #+#             */
/*   Updated: 2021/10/20 09:48:37 by acinca-f@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("Res <%d> <1> \n", ft_isprint('g'));
// 	printf("Res <%d> <1> \n", ft_isprint('K'));
// 	printf("Res <%d> <0> \n", ft_isprint('\n'));
// 	printf("Res <%d> <1> \n", ft_isprint('%'));
// 	printf("Res <%d> <1> \n", ft_isprint('4'));
// }
