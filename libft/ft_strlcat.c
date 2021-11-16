/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f@student.42lisboa.com <acinca-f>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 10:48:07 by acinca-f@student  #+#    #+#             */
/*   Updated: 2021/10/20 10:38:23 by acinca-f@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (dst[len] && len < size)
		len++;
	i = len;
	while (src[len - i] && len + 1 < size)
	{
		dst[len] = src[len - i];
		len++;
	}
	if (i < size)
		dst[len] = '\0';
	return (i + ft_strlen(src));
}

// int	main(void)
// {
// 	char	dst1[20] = "hello";
// 	char	dst2[20] = "hello";
// 	char	src[] = "Amazing";

// 	ft_strlcat(dst1, src, 20);
// 	strlcat(dst2, src, 20);
// 	printf("Res <%s>\nOri <%s>\n", dst1, dst2);
// }
