/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 02:28:57 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/24 23:25:09 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *>>iterates ’lst’ and applies the function ’f’ on the content of each node.
 * Creates a new list resulting of the successive applications of ’f’.<,
 * @note The 'del' function is used to delete the content of a node if needed.
 * 
 * @param  *lst: The address of a pointer to a node.
 * @param  *(*f): function used to iterate on the list 
 * @param  (*del): function used to delete
 * @retval the newly created list
 * NULL if allocation fails
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*head;

	head = NULL;
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		if (!temp)
			ft_lstdelone(lst, del);
		ft_lstadd_back(&head, temp);
		lst = lst->next;
	}
	return (head);
}
