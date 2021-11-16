/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f@student.42lisboa.com <acinca-f>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 09:57:53 by acinca-f@student  #+#    #+#             */
/*   Updated: 2021/10/20 09:31:16 by acinca-f@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *) s;
	while (n-- > 0)
	{
		*(str++) = '\0';
	}
}

// int	main(void)
// {
// 	char	str[] = "My 42 project is nice";

// 	printf("Original <%s>\n", str);
// 	ft_bzero(str, 6);
// 	printf("Result <%c>\n", str[6]);
// }
