/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 02:28:57 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/20 02:43:01 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*head;

	head = NULL;
	while(lst)
	{
		temp = ft_lstnew(f(lst->content));
		if	(!temp)
			ft_lstdelone(lst, del);
		ft_lstadd_back(&head, temp);
		lst=lst->next;
	}
	return (head);
}
