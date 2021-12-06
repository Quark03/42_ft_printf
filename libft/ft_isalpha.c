/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f@student.42lisboa.com <acinca-f>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 09:28:06 by acinca-f@student  #+#    #+#             */
/*   Updated: 2021/10/20 09:42:35 by acinca-f@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("Res <%d> <1> \n", ft_isalpha('g'));
// 	printf("Res <%d> <1> \n", ft_isalpha('K'));
// 	printf("Res <%d> <0> \n", ft_isalpha('\n'));
// 	printf("Res <%d> <0> \n", ft_isalpha('%'));
// 	printf("Res <%d> <0> \n", ft_isalpha('4'));
// }
