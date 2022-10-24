/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:20:44 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/24 23:18:53 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 *>>allocates and returns a substring from the string str.
 * The substring begins at index start and is of maximum size len
 *
 * @param  *str: string to be split 
 * @param  start: index of str to start spliting
 * @param  n: max len of substring
 * @retval: The substring.
 * NULL if the allocation fails 
 */
char	*ft_substr(char const *str, unsigned int start, size_t n)
{
	char	*ret;
	size_t	i;

	if (!str)
		return (NULL);
	i = ft_strlen(str);
	if (start >= i)
		n = 0;
	else if (n > (i - start))
		n = i - start;
	ret = (char *)malloc(n + 1);
	if (!ret)
		return (NULL);
	i = -1;
	ret[n] = 0;
	while (++i < n)
		ret[i] = str[start + i];
	return (ret);
}
