/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 12:42:29 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/17 00:17:11 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * >> appends src to dest to at most the size of dest -1
 * to ensure its NULL terminated.<<
 * @param  *dest: string to concatenate to
 * @param  *src: string to attach
 * @param  n: maximum bytes to write
 * @retval size of str it tried t create (len of des + src)
 *if n < size of dest n is assumed as len of dest, returning (n + len of  src)
 */
size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	d_size;
	size_t	src_size;
	size_t	i;

	src_size = ft_strlen(src);
	if (!n)
		return (src_size);
	i = -1;
	d_size = ft_strlen(dest);
	if (d_size >= n)
		return (n + src_size);
	while (++i < (n - d_size - 1) && src[i])
		dest[d_size + i] = src[i];
	dest[d_size + i] = 0;
	return (d_size + src_size);
}
