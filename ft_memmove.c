/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:50:43 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/10 18:47:59 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
*>>copies n characters from src to dest
* safer than memcpy for overlapping memory<<
* 
* @param dest: pointer to the dest array
* @param src: pointer to the memory to be copied
* @param n: number of bytes to be copied
* @retval: pointer to dest
* */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
	}
	return (dest);
}
