/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f@student.42lisboa.com <acinca-f>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:48:04 by acinca-f@student  #+#    #+#             */
/*   Updated: 2021/10/20 16:55:20 by acinca-f@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// void	my_func(unsigned int i, char *str)
// {
// 	(void) i;
// 	*str -= 32;
// }

// int	main(void)
// {
// 	char	str[10] = "hello.";

// 	printf("Original: <%s>\n", str);
// 	ft_striteri(str, my_func);
// 	printf("Result: <%s>\n", str);
// 	return (0);
// }
