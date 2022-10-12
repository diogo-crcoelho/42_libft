/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:30:14 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/11 16:03:52 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
