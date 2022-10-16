/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 22:58:10 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/16 12:35:42 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
* >>copies n characters from memory area src to memory area dest
* handling memory ovelaps<<
* @param *dest: pointer to the dest array
* @param *src: pointer to the memory to be copied
* @param n: number of bytes to be copied
* @retval: dest after copying
* */
void	*ft_memmove(void *dest, const void *src, size_t n)
{	
	if (!src && !dest)
		return (NULL);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	while (n-- > 0)
		((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	return (dest);
}
