/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:30:14 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/13 00:03:43 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
*>>copies up to n-1 bytes of src to dest
* always NULL terminating the result<< 
* @param *dest: string to copy to
* @param *src: string to copy from
* @param n:number of bytes to copy + 1
* @retval: size of the string it tried to create.(size of source)
* */
size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	ret;

	ret = ft_strlen(src);
	i = -1;
	if (n == 0)
		return (ret);
	while (src[++i] && i < n - 1)
		dest[i] = src[i];
	dest[i] = 0;
	return (ret);
}
