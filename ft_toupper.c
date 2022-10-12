/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:15:42 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/12 16:39:15 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
*>> passes given char to uppercase if is lowercase<<
* 
* @param c: char to be uppercased
* @retval: uppercase c if lowercase, c if not
* */
int	ft_toupper(int c)
{
	if (c < 97 || c > 122)
		return (c);
	return (c - 32);
}
