/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f@student.42lisboa.com <acinca-f>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:22:01 by acinca-f@student  #+#    #+#             */
/*   Updated: 2021/10/25 10:24:53 by acinca-f@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_counter(long int n)
{
	int	c;

	c = 0;
	if (n == 0)
		return (1);
	n = -n;
	while (n != 0)
	{
		n /= 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = 0;
	if (n < 0)
		i = 1;
	len = digit_counter(n) + i;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	if (n < 0)
		str[0] = '-';
	str[len] = '\0';
	n = n * (((n < 0) * -2) + 1);
	while (len-- != i)
	{
		str[len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

// int	main(void)
// {
// 	char	*dest;
// 	int		nbr;

// 	nbr = 6738573;
// 	dest = ft_itoa(nbr);
// 	printf("Res: <%s> Num: <%d>\n", dest, nbr);
// 	nbr = -6738573;
// 	dest = ft_itoa(nbr);
// 	printf("Res: <%s> Num: <%d>\n", dest, nbr);
// 	nbr = 54125485;
// 	dest = ft_itoa(nbr);
// 	printf("Res: <%s> Num: <%d>\n", dest, nbr);
// 	nbr = 0;
// 	dest = ft_itoa(nbr);
// 	printf("Res: <%s> Num: <%d>\n", dest, nbr);
// }
