/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 23:58:48 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/13 00:21:47 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
*>>compares str1 and str2, (max n bytes)<<
* 
* @param *str1: first block of memory to be compared
* @param *str2: second block of memory to be compared
* @param n: number of bytes to compare
* @retval: 0 if str1 = str2
* (> 0) if str1 > str2 (values not size)
* (< 0) if str1 < str2 (values not size)
* */
int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	return (ft_strncmp((char *)str1, (char *)str2, n));
}
