/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f@student.42lisboa.com <acinca-f>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 09:57:01 by acinca-f@student  #+#    #+#             */
/*   Updated: 2021/10/20 10:24:07 by acinca-f@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*string;

	string = (unsigned char *) s;
	while (len-- > 0)
	{
		*(string++) = (unsigned char)c;
	}
	return (s);
}

// int	main(void)
// {
// 	char	dst1[10];
// 	char	dst2[10];
// 	int		chr = 'a';
// 	int		len = 8;

// 	printf("Res <%s>\n", ft_memset(dst1, chr, len));
// 	printf("Ori <%s>\n", ft_memset(dst2, chr, len));
// }
