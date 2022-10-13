/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:19:09 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/13 16:58:17 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
*>>duplicate string given<
* 
* @param *str: string to be duplicated
* @retval: duplicated string with allocated memory
* */
char	*ft_strdup(const char *str)
{
	size_t	size;
	size_t	i;
	char	*ret;

	size = ft_strlen(str);
	ret = malloc(size + 1);
	if (!ret)
		return (NULL);
	i = -1;
	while (++i < size)
		ret[i] = str[i];
	ret[i] = 0;
	return (ret);
}
