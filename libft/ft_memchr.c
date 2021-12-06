/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f@student.42lisboa.com <acinca-f>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 12:51:16 by acinca-f@student  #+#    #+#             */
/*   Updated: 2021/10/20 09:53:31 by acinca-f@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	c = (unsigned char) c;
	str = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (str[i] == c)
			return ((void *)str + i);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	str[] = "Mike is nice";

// 	printf("Res: %s\n", ft_memchr(str, 'k', ft_strlen(str)));
// 	printf("Original: %s\n", memchr(str, 'k', ft_strlen(str)));
// }
