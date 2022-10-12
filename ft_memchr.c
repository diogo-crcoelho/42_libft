/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 23:14:55 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/13 00:06:53 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
*>>checks for the first instance of c in the first n bytes of str<<
* @note:c is passed as int but treated as unsigned char
*
* @param *str:
* @param c: char to be searched for (int)casted
* @param n: number of bytes to search
* @retval: pointer to the first instance of c,
* NULL if non existent
* */
void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
	{
		if (((unsigned char *)str)[i] == (unsigned char)c)
			return ((void *)str + i);
	}	
	return (NULL);
}
