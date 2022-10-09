/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:34:59 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/09 15:46:31 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
* >> checks if c is an alphabetic char<<
* 
* @param c:char to be checked (int)casted
* @retval: 1 if alphabetic, 0 if not
* */
int	ft_isalpha(int c)
{
	if (c < 65 || c > 122)
		return (0);
	if (c > 90 && c < 97)
		return (0);
	return (1);
}
