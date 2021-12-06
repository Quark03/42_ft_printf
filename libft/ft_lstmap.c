/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f@student.42lisboa.com <acinca-f>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:12:14 by acinca-f@student  #+#    #+#             */
/*   Updated: 2021/11/08 17:12:16 by acinca-f@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*s;
	t_list	*hel;

	s = NULL;
	while (lst)
	{
		hel = ft_lstnew(f(lst->content));
		if (!hel)
		{
			ft_lstclear(&s, del);
			return (NULL);
		}
		ft_lstadd_back(&s, hel);
		lst = lst->next;
	}
	return (s);
}
