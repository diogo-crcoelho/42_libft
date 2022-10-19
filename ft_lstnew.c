/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:26:47 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/19 19:52:35 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *>>allocates and returns a new node, the member variable content is i
 * nitialized with the value of the parameter ’content’. 
 * 
 * @note The variable ’next’ is initialized to NULL
 * @param  *content: The content to create the node with
 * @retval: The new node
 */
t_list *ft_lstnew(void *content)
{
	t_list *ret;

	ret = (t_list *)malloc(sizeof(t_list));
	if (!ret)
		return (NULL);
	ret[0].content = content;
	ret[0].next = NULL;
	return	(ret);
}