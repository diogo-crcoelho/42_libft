/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 22:37:17 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/24 23:23:29 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 *>>takes as a parameter a node and frees the memory of the node's
 * content using the function ’del’ given as a parameter and free the node.<<
 * @note memory of next must not be freed
 *  
 * @param  *lst: The node to free.
 * @param  (*del): Function used to delete content
 * @retval None
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
