/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:18:41 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/09 15:50:58 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
*>>checks if c is a digit
* 
* @param c: char to be checked (int)casted
* @retval: 1 if digit, 0 if not
* */
int	ft_isdigit(int c)
{
	if (c < 47 || c > 57)
		return (0);
	return (1);
}
