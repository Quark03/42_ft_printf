/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f@student.42lisboa.com <acinca-f>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 12:29:49 by acinca-f@student  #+#    #+#             */
/*   Updated: 2021/10/20 10:59:34 by acinca-f@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	unsigned char	l;

	l = (unsigned char) c;
	if (l >= 'a' && l <= 'z')
		return (l - 32);
	return (c);
}

// int	main(void)
// {
// 	printf("Res <%c> <A>\n", ft_toupper('A'));
// 	printf("Res <%c> <C>\n", ft_toupper('c'));
// 	printf("Res <%c> <9>\n", ft_toupper('9'));
// 	printf("Res <%c> <Z>\n", ft_toupper('Z'));
// 	printf("Res <%c> <&>\n", ft_toupper('&'));
// }
