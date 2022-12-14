/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:40:58 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/12 23:41:33 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
*>> checks for the first instance of c in str<<
* @note:c is passed as int but treated as unsigned char
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
		if (((unsigned char *)str)[i] == (unsigned char)c)
			return ((char *)&str[i]);
	if (str[i] == (unsigned char)c)
		return ((char *)&str[i]);
	return (NULL);
}
