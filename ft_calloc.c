/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 00:30:53 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/13 00:37:56 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*ret;
	size_t	i;

	ret = malloc(nitems * size);
	if (!ret)
		return (NULL);
	i = -1;
	while (++i < nitems)
		((unsigned char *)ret)[i] = 0;
	return (ret);
}
