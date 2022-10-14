/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:08:41 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/14 18:32:40 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_sep(char c, const char *charset)
{
	size_t	i;

	i = -1;
	while (charset[++i])
		if (c == charset[i])
			return (1);
	return (0);
}

static size_t	check_size(const char *str, const char *charset)
{
	size_t	size;
	size_t	i;

	size = ft_strlen(str);
	i = 0;
	while (check_sep(str[i], charset) && str[i])
		i ++;
	if (i == size)
		return (0);
	while (check_sep(str[size - 1], charset))
		size --;
	return (size - i);
}

char	*ft_strtrim(const char *str, const char *charset)
{
	size_t		size;
	char		*res;
	size_t		i;
	size_t		j;

	if (!str)
		return (NULL);
	size = check_size(str, charset);
	if (!size)
		return ("");
	res = (char *)malloc(size + 1);
	if (!res)
		return (NULL);
	res[size] = 0;
	i = 0;
	j = -1;
	while (check_sep(str[i], charset) && str[i])
		i ++;
	while (++j < size)
		res[j] = str[i + j];
	return (res);
}
