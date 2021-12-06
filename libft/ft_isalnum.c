/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f@student.42lisboa.com <acinca-f>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 09:46:59 by acinca-f@student  #+#    #+#             */
/*   Updated: 2021/10/20 09:39:04 by acinca-f@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("Test <%d> <0>\n", ft_isalnum('%'));
// 	printf("Test <%d> <1>\n", ft_isalnum('6'));
// 	printf("Test <%d> <1>\n", ft_isalnum('g'));
// 	printf("Test <%d> <1>\n", ft_isalnum('T'));
// 	printf("Test <%d> <0>\n", ft_isalnum('\n'));
// }
