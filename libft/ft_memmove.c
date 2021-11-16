/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f@student.42lisboa.com <acinca-f>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 10:09:52 by acinca-f@student  #+#    #+#             */
/*   Updated: 2021/10/20 10:18:25 by acinca-f@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*tmp;
	char	*dest;

	tmp = (char *)src;
	dest = (char *)dst;
	if (tmp < dest)
	{
		while (n--)
			dest[n] = tmp[n];
	}
	else
		ft_memcpy(dest, tmp, n);
	return (dst);
}

// int	main(void)
// {
// 	char	str1[30];
// 	char	str2[30];
// 	char	src[] = "Apple";
// 	int		len = 3;

// 	printf("Res <%s>\n", ft_memmove(str1, src, len));
// 	printf("Ori <%s>\n", memmove(str2, src, len));
// }
