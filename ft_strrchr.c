/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:03:11 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/12 17:12:11 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
*>> checks for the last instance of c in str<<
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
	if (str[i] == c)
		return ((char *)&str[i]);
	while (--i >= 0)
		if (((unsigned char *)str)[i] == c)
			return ((char *)&str[i]);
	return (NULL);
}
