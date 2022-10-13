/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:40:59 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/13 22:52:24 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
*>>outputs the character ’c’ to the given file
* descriptor. <<
* 
* @param c:char to output
* @param fd:file descriptor to write on
* */
void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
