/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f@student.42lisboa.com <acinca-f>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 12:46:47 by acinca-f@student  #+#    #+#             */
/*   Updated: 2021/10/20 10:46:55 by acinca-f@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 != '\0' && *s2 != '\0' && n > 0)
	{
		if (*s1 != *s2)
		{
			break ;
		}
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
	{
		return (0);
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

// int	main(void)
// {
// 	ssize_t	size = 3;
// 	int		res1;
// 	int		res2;
// 	char	src1[] = "Apple";
// 	char	src2[] = "apple";

// 	res1 = ft_strncmp(src1, src2, size);
// 	res2 = strncmp(src1, src2, size);
// 	printf("Res <%d>\nOri <%d>\n", res1, res2);
// }
