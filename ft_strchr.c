/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:40:58 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/12 17:01:39 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
*>> checks for the first instance of c in str<<
* 
* @param *str:string to be searched
* @param c: char to be searched
* @retval: pointer to the first instance of c,
* NULL if non existent
* */
char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = -1;
	while (str[++i])
		if (((unsigned char *)str)[i] == c)
			return ((char *)&str[i]);
	if (str[i] == c)
		return ((char *)&str[i]);
	return (NULL);
}
