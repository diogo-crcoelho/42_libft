/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:06:24 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/10 15:33:25 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
*>>sets first n bytes of memory pointed by str to 0
* erasing them<<
* 
* @param *str: pointer to the block of memory to erase
* @param n: number of bytes to erase
* */
void	ft_bzero(void *str, size_t n)
{
	ft_memset(str, 0, n);
}
