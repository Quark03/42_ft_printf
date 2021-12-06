/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f@student.42lisboa.com <acinca-f>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:18:11 by acinca-f@student  #+#    #+#             */
/*   Updated: 2021/10/25 09:56:37 by acinca-f@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;

	i = ft_strlen(needle);
	if (i == 0)
		return ((char *)haystack);
	while (len >= i && ft_strlen(haystack) != 0)
	{
		len--;
		if (!ft_memcmp(haystack, needle, i))
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	hey[] = "Life is a really cool thing";
// 	char	need[] = "is";
// 	int		look = 8;

// 	printf("Res <%s>\n", ft_strnstr(hey, need, look));
// 	printf("Ori <%s>\n", strnstr(hey, need, look));
// }
