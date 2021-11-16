/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f@student.42lisboa.com <acinca-f>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 12:43:38 by acinca-f@student  #+#    #+#             */
/*   Updated: 2021/10/25 09:54:29 by acinca-f@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*res;

	res = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			res = (char *)s + i;
		i++;
	}
	if (c == '\0')
		res = (char *)s + i;
	return (res);
}

// int	main(void)
// {
// 	printf("Res <%s>\n", ft_strrchr("Perter the rabbit", 'r'));
// 	printf("Ori <%s>\n", strrchr("Perter the rabbit", 'r'));
// }
