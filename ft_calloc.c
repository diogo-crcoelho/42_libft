/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 00:30:53 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/25 23:52:21 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
*>>alocates requested memory and returns a pointer to it
* set alocated memory to 0<<
* 
* @param nitems: number of items to allocate
* @param size:size of items to allocate
* @retval: pointer to allocated memory
* NULL if allocation fails
* */
void	*ft_calloc(size_t nitems, size_t size)
{
	void	*ret;
	size_t	temp;

	temp = nitems * size;
	if (nitems != temp / size)
		return (NULL);
	ret = malloc(nitems * size);
	if (!ret)
		return (NULL);
	ft_bzero(ret, nitems * size);
	return (ret);
}
