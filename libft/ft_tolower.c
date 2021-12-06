/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f@student.42lisboa.com <acinca-f>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 12:36:01 by acinca-f@student  #+#    #+#             */
/*   Updated: 2021/10/20 10:58:49 by acinca-f@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	unsigned char	l;

	l = (unsigned char) c;
	if (l >= 'A' && l <= 'Z')
		return (l + 32);
	return (c);
}

// int	main(void)
// {
// 	printf("Res <%c> <a>\n", ft_tolower('A'));
// 	printf("Res <%c> <c>\n", ft_tolower('c'));
// 	printf("Res <%c> <9>\n", ft_tolower('9'));
// 	printf("Res <%c> <z>\n", ft_tolower('Z'));
// 	printf("Res <%c> <&>\n", ft_tolower('&'));
// }
