/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:04:35 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/18 15:29:42 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 *>>applies the function f on each character of the string str
 * passed as argument, passing its index as first argument.
 * Each character is passed by address to ’f’ to be modified if necessary<<
 *
 * @param  *str: The string on which to iterate
 * @param  (*f): The function to apply to each character.
 */
void	ft_striteri(char *str, void (*f)(unsigned int, char*))
{
	size_t	n;

	if (!str)
		return ;
	n = ft_strlen(str);
	while (n-- > 0)
		f(n, &str[n]);
}
