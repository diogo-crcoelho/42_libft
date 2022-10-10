/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:37:22 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/10 15:58:05 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void * src, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		((unsigned char *) dest)[i] = ((unsigned char *)src)[i]; 
	return (dest);
}
