/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:20:44 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/18 13:43:29 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	ret = (char *)malloc(n + 1);
	if (!ret)
		return (NULL);
	i = -1;
	if (start >= ft_strlen(str))
		ret[0] = 0;
	else
	{
		while (++i < n)
			ret[i] = str[start + i];
		ret[i] = 0;
	}
	return (ret);
}
