/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:37:22 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/15 22:15:26 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
* >>copies n characters from memory area src to memory area dest.<<
* 
* @param *dest: pointer to the dest array
* @param *src: pointer to the memory to be copied
* @param n: number of bytes to be copied
* @retval: dest after copying
* */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!src && !dest)
		return (NULL);
	i = -1;
	while (++i < n)
		((unsigned char *) dest)[i] = ((unsigned char *)src)[i];
	return (dest);
}
