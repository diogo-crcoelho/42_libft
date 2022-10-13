/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 22:58:10 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/13 15:48:12 by dcarvalh         ###   ########.fr       */
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
	tdest = (unsigned char*)dest;
	while (++i < n)
	{
		temp = ((unsigned char *)src)[i];
		printf("%c-", temp);
		tdest[i] = temp;
		printf("%c\n", tdest[i]);
	}
	return (dest);
}
