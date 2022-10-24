/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:28:16 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/24 22:18:36 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	if (c > 8 && c < 14)
		return (1);
	if (c == 32)
		return (1);
	return (0);
}

/**
 * >>converts given str to int
 * ignores initial spaces and checks first signal<<
 *
 * @param  *str: string to be converted to int
 * @retval: int corresponding to str 
 */
int	ft_atoi(const char *str)
{
	int	res;
	int	i;
	int	signal;

	i = 0;
	signal = 1;
	res = 0;
	while (ft_isspace(str[i]))
		i ++;
	if (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			signal *= -1;
		++i;
	}
	while (ft_isdigit(str[i]) && str[i])
	{	
		res = res * 10 + str[i] - 48;
		++i;
	}
	return (res *= signal);
}
