/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:03:11 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/12 23:42:41 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
*>> checks for the last instance of c in str<<
* @note:c is passed as int but treated as unsigned char
* 
* @param *str:string to be searched
* @param c: char to be searched
* @retval: pointer to the last instance of c,
* NULL if non existent
* */
char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	if (str[i] == (unsigned char)c)
		return ((char *)&str[i]);
	while (--i >= 0)
		if (((unsigned char *)str)[i] == (unsigned char)c)
			return ((char *)&str[i]);
	return (NULL);
}
