/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:14:37 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/12 23:11:57 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
*>>compares str1 and str2, (max n bytes)<<
* 
* @param *str1: first string to be compared
* @param *str2: second string to be compared
* @param n: number of bytes to compare
* @retval: 0 if strings are equal
* (> 0) if str1 > str2 (values not size)
* (< 0) if str1 < str2 (values not size)
* */
int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n && (str1[i] || str2[i]))
		if (str1[i] != str2[i])
			return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
	return (0);
}
