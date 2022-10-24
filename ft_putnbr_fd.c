/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:58:29 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/24 22:51:54 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

static size_t	digit_count(long int n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
	{
		i ++;
		n *= -1;
	}
	while (n > 0)
	{
		i ++;
		n /= 10;
	}
	return (i);
}

/**
 *>>outputs the integer ’n’ to the given file descriptor<<
 *  
 * @param  n: int to output 
 * @param  fd: file descriptor to write on
 */
void	ft_putnbr_fd(int n, int fd)
{
	char		res[12];
	size_t		size;
	long int	temp;

	temp = (long)n;
	size = digit_count(temp);
	res[size] = 0;
	if (temp == 0)
		res[0] = 48;
	if (temp < 0)
	{
		res[0] = '-';
		temp *= -1;
	}
	while (temp > 0)
	{		
		res[--size] = temp % 10 + 48;
		temp /= 10;
	}
	ft_putstr_fd(res, fd);
}
