/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f@student.42lisboa.com <acinca-f>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:41:25 by acinca-f@student  #+#    #+#             */
/*   Updated: 2021/10/25 10:04:16 by acinca-f@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		k;
	char	*dest;

	dest = malloc(sizeof(char) + ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!dest)
		return (0);
	i = -1;
	while (s1[++i] != '\0')
		dest[i] = s1[i];
	k = -1;
	while (s2[++k] != '\0')
		dest[i + k] = s2[k];
	dest[i + k] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	src1[] = "My Friends";
// 	char	src2[] = " Are Awesome";
// 	char	*dst;

// 	dst = ft_strjoin(src1, src2);
// 	printf("Res <%s>\n", dst);
// }
