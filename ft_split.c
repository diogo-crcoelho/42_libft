/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 21:59:41 by dcarvalh          #+#    #+#             */
/*   Updated: 2022/10/18 13:41:36 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	i;
	int	count;

	if (!str)
		return (0);
	if (ft_strlen(str) && !ft_strchr(str, c))
		return (1);
	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i ++;
		if (str[i] && str[i] != c)
			count ++;
		while (str[i] && str[i] != c)
			i ++;
	}
	return (count);
}

static size_t	word_size(const char *str, int n, char c)
{
	size_t	i;

	i = 0;
	while (str[++n] && str[n] != c)
		i ++;
	return (i);
}

/**
 *>>allocates and returns an array of strings obtained by splitting str using
 * the character ’c’ as a delimiter. The array must end with a NULL pointer.<<
 *   
 * @param  *str: string to be split 
 * @param  c: delimiter char
 * @retval: The array of new strings resulting from the split.
 * NULL if the allocation fails.
 */
char	**ft_split(const char *str, char c)
{
	char	**ret;
	int		t;
	int		j;
	int		i;

	i = 0;
	j = -1;
	t = count_words(str, c);
	ret = (char **)malloc(sizeof(char *) * (t + 1));
	if (!ret)
		return (NULL);
	ret[t] = NULL;
	while (++j < t)
	{
		while (str[i] && str[i] == c)
			i ++;
		if (str[i] && str[i] != c)
			ret[j] = ft_substr(str, i, word_size(str, i - 1, c));
		while (str[i] && str[i] != c)
			i ++;
	}
	return (ret);
}
