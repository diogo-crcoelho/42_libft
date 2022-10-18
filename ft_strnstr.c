/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:50:30 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/17 15:09:32 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
*>> locates the first instance of str needle on str haystack on the
* first n bytes of haystack<<
* 
* @param *haystack: string to search in
* @param *needle: string to search for
* @param n: number of bytes to search
* @retval:pointer to the first instance of needle in haystack if found
* NULL if not found
* pointer to haystack if needle is empty
* */
char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	size;

	if (!n && needle[0])
		return (NULL);
	i = -1;
	size = ft_strlen(needle);
	if (ft_strlen(haystack) >= size)
	{	
		while (++i <= n - size)
		{
			if (!ft_strncmp(&haystack[i], needle, size))
				return ((char *)&haystack[i]);
		}
	}
	return (NULL);
}
