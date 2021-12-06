/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acinca-f@student.42lisboa.com <acinca-f>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:09:42 by acinca-f@student  #+#    #+#             */
/*   Updated: 2021/11/08 17:11:09 by acinca-f@student ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*help;

	if (*lst)
	{
		help = ft_lstlast(*lst);
		help->next = new;
	}
	else if (lst && !(*(lst)))
		*lst = new;
}
