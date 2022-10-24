/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:40:59 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/24 22:51:40 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

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
