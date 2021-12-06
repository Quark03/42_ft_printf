/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f@student.42lisboa.com <acinca-f>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:02:20 by acinca-f@student  #+#    #+#             */
/*   Updated: 2021/10/25 10:11:25 by acinca-f@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	k;

	if (ft_strlen(s1) <= 0)
		return (ft_strdup(""));
	i = 0;
	k = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]) != 0)
	{
		if (i++ > k)
			return (ft_strdup(""));
	}
	while (ft_strchr(set, s1[k]) != 0)
	{
		if (k-- <= i)
			return (ft_strdup(""));
	}
	return (ft_substr(s1, i, k + 1 - i));
}

// int	main(void)
// {
// 	char	*dest;
// 	char	*src;
// 	char	*sep;

// 	src = "#CMike#*";
// 	sep = " #*";
// 	dest = ft_strtrim(src, sep);
// 	printf("Res <%s>\n", dest);
// }
