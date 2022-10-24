/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:19:09 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/24 22:53:37 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
*>>duplicate string given<
* 
* @param *str: string to be duplicated
* @retval: duplicated string with allocated memory
* */
char	*ft_strdup(const char *str)
{
	size_t	size;
	char	*ret;

	size = ft_strlen(str) + 1;
	ret = (char *)malloc(size);
	if (!ret)
		return (NULL);
	ft_memcpy(ret, str, size);
	return (ret);
}
