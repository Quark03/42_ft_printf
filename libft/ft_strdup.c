/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f@student.42lisboa.com <acinca-f>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:24:10 by acinca-f@student  #+#    #+#             */
/*   Updated: 2021/10/25 10:00:14 by acinca-f@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*dest;

	dest = malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!dest)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	src[] = "My Friends";
// 	char	*dst1;
// 	char	*dst2;

// 	dst1 = ft_strdup(src);
// 	dst2 = strdup(src);
// 	printf("Res <%s>\nOri <%s>\n", dst1, dst2);
// }
