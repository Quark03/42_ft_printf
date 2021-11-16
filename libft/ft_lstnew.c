/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f@student.42lisboa.com <acinca-f>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:12:21 by acinca-f@student  #+#    #+#             */
/*   Updated: 2021/11/08 17:12:28 by acinca-f@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*toret;

	toret = (t_list *)malloc(sizeof(t_list));
	if (!toret)
		return (NULL);
	toret->content = content;
	toret->next = NULL;
	return (toret);
}
