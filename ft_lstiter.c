/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 02:25:59 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/20 03:32:54 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *>>  iterates over lst applying 'f' to every node<<
 * 
 * @param  *lst: The address of a pointer to a node.
 * @param  (*f): function used to iterate on the list 
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while(lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
