/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f@student.42lisboa.com <acinca-f>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 09:47:05 by acinca-f@student  #+#    #+#             */
/*   Updated: 2021/10/20 09:46:40 by acinca-f@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("Res <%d> <%d>  \n", ft_isascii(45), 1);
// 	printf("Res <%d> <%d>  \n", ft_isascii(127), 1);
// 	printf("Res <%d> <%d>  \n", ft_isascii(200), 0);
// 	printf("Res <%d> <%D>  \n", ft_isascii(452), 0);
// }
