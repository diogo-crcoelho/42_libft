/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:44:55 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/18 15:35:32 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *>>allocates and returns a new string,
 * which is the result of the concatenation of s1 and s2<<
 *   
 * @param  *str1: The prefix string.
 * @param  *str2: The suffix string.
 * @retval: The new string.
 * NULL if the allocation fails.
 */
char	*ft_strjoin(char const *str1, char const *str2)
{
	size_t	size;
	char	*ret;

	if (!str1 || !str2)
		return (NULL);
	size = ft_strlen(str1) + ft_strlen(str2);
	ret = (char *)ft_calloc(size + 1, 1);
	if (!ret)
		return (NULL);
	ft_strlcat(ret, str1, size + 1);
	ft_strlcat(ret, str2, size + 1);
	return (ret);
}
