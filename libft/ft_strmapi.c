/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f@student.42lisboa.com <acinca-f>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:57:00 by acinca-f@student  #+#    #+#             */
/*   Updated: 2021/10/20 17:00:51 by acinca-f@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	str = (char *)malloc(sizeof(char) * (int)ft_strlen(s) + 1);
	if (!str)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = 0;
	return (str);
}

// char	my_func(unsigned int i, char str)
// {
// 	(void) i;
// 	return (str - 32);
// }

// int	main(void)
// {
// 	char str[10] = "helloz";
// 	printf("Original: <%s>\n", str);
// 	char *result = ft_strmapi(str, my_func);
// 	printf("Result: <%s>\n", result);
// 	return (0);
// }
