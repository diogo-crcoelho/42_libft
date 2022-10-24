/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:06:28 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/24 22:54:17 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 *>>applies the function f to each character of the string s,
 * and passing its index as first argument to create a new string resulting
 * from successive applications of f<<
 *
 * @param  *str: The string on which to iterate
 * @param  (*f): The function to apply to each character 
 * @retval: The string created from the successive applications of ’f’.
 * Returns NULL if the allocation fails.
 */
char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	size_t	size;
	size_t	i;
	char	*res;

	if (!str)
		return (NULL);
	size = ft_strlen(str);
	res = (char *)malloc(size + 1);
	if (!res)
		return (NULL);
	i = -1;
	while (++i < size)
		res[i] = f(i, str[i]);
	res[i] = 0;
	return (res);
}
