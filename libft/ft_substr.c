/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f@student.42lisboa.com <acinca-f>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:30:24 by acinca-f@student  #+#    #+#             */
/*   Updated: 2021/10/25 10:01:50 by acinca-f@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*new;

	if (s == 0)
		return (0);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (!new)
		return (0);
	i = 0;
	if (ft_strlen(s) > start)
	{
		while (i < len && s[start + i] != '\0')
		{
			new[i] = s[start + i];
			i++;
		}
	}
	new[i] = '\0';
	return (new);
}

// int	main(void)
// {
// 	char	*dst;
// 	char	src[] = "Machines will destroy the world";

// 	dst = ft_substr(src, 5, ft_strlen(src));
// 	printf("Res <%s>\n", dst);
// }
