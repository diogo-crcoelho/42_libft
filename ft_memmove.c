/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 22:58:10 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/13 14:46:42 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	temp;
	unsigned char 	*tdest;
	
	i = -1;
	tdest
	while (++i < n)
	{
		temp = ((unsigned char *)src)[i];
		printf("%c-", temp);
		((unsigned char *)dest)[i] = temp;
		printf("%c\n", ((unsigned char *)dest)[i]);
	}
	return (dest);
}
