/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:33:40 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/12 16:39:23 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
*>> passes given char to lowercase if is uppercase<<
* 
* @param c: char to be lowercased
* @retval: lowercase c if uppercase, c if not
* */
int	ft_tolower(int c)
{
	if (c < 65 || c > 90)
		return (c);
	return (c + 32);
}
