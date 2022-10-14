/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:38:00 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/14 16:23:40 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
*>>outputs the string ’str’ to the given file
* descriptor. <<
* 
* @param *str:string to output
* @param fd:file descriptor to write on
* */
void	ft_putstr_fd(char *str, int fd)
{
	if (str)
		write (fd, str, ft_strlen(str));
}
