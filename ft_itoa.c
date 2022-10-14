/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:56:16 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/14 02:27:56 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_count(long int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
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
*>>returns a string representing the integer received as an argument.<<
* 
* @param n: int to convert
* @retval: converted str if allocation is sucessful
* NULL otherwise
* */
char	*ft_itoa(int n)
{
	char		*res;
	int			size;
	long int	temp;

	temp = (long)n;
	size = digit_count(temp);
	res = (char *)malloc(size + 1);
	if (!res)
		return (NULL);
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
		size --;
		res[size] = temp % 10 + 48;
		temp /= 10;
	}
	return (res);
}
