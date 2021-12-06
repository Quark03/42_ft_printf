/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f@student.42lisboa.com <acinca-f>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 10:14:46 by acinca-f@student  #+#    #+#             */
/*   Updated: 2021/10/20 10:42:12 by acinca-f@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i])
	{
		i++;
	}
	if (size != 0)
	{
		while (src[j] != '\0' && j < (size - 1))
		{
			dst[j] = src [j];
			j++;
		}
		dst[j] = '\0';
	}
	return (i);
}

// int	main(void)
// {
// 	char	dst1[20];
// 	char	dst2[20];
// 	char	src[] = "Amazing";

// 	ft_strlcpy(dst1, src, 20);
// 	strlcpy(dst2, src, 20);
// 	printf("Res <%s>\nOri <%s>\n", dst1, dst2);
// }
