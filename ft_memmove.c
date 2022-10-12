/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:50:43 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/12 16:06:09 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
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
	size_t			i;
	unsigned char	*temp;

	i = -1;
	temp = (unsigned char *)src;
	printf("%s", temp);
	return (dest);
}
