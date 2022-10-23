/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:15:54 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/20 16:10:23 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
*>> copies char c to the first n positions of memory pointed by str<<
* @note:c is passed as int but treated as unsigned char
* 
* @param *str: pointer to the block of memory to fill
* @param c: value to be set (int)casted
* @param n: number of bytes to replace
* @retval: a pointer to the memory area str
* */
void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		((unsigned char *)str)[i] = (unsigned char)c;
	return (str);
}
