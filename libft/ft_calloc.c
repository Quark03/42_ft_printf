/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f@student.42lisboa.com <acinca-f>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:19:06 by acinca-f@student  #+#    #+#             */
/*   Updated: 2021/10/26 16:04:49 by acinca-f@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(size * count);
	if (!ptr)
		return (0);
	ft_bzero(ptr, count * size);
	return (ptr);
}

// int	main(void)
// {
// 	char	*str;

// 	str = calloc(4, sizeof(char));
// 	str = "ABCD";
// 	printf("String <%s>\n", str);
// }
