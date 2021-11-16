/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f@student.42lisboa.com <acinca-f>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 10:02:37 by acinca-f@student  #+#    #+#             */
/*   Updated: 2021/10/20 10:02:43 by acinca-f@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*source;
	char	*dest;

	source = (char *) src;
	dest = (char *) dst;
	if (!dst && !src)
		return (dst);
	while (n--)
		*dest++ = *source++;
	return (dst);
}

// int	main(void)
// {
// 	char	str1[20];
// 	char	str2[20];

// 	printf("Res <%s> \n", ft_memcpy(str1, "Potatoes And Onions", 3));
// 	printf("Ori <%s> \n", memcpy(str2, "Potatoes And Onions", 3));
// }
