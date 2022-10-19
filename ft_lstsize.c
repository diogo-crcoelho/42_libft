/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:52:51 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/19 20:00:50 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *>>counts the number of nodes in a list.<<
 *    
 * @param  *lst: first node of the list 
 * @retval: len of the list
 */

int	ft_lstsize(t_list *lst)
{
	int	i;

	if (!lst)
		return (0);
	i = 1;
	while(lst->next)
	{
		i ++;
		lst = lst->next;;
	}
	return (i);
}