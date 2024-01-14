/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperetia <mperetia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 01:03:06 by mperetia          #+#    #+#             */
/*   Updated: 2023/06/01 13:55:00 by mperetia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_col(char *s, char c, size_t i, size_t n_col)
{
	if (!s)
		return (0);
	while (*(s + i) && *(s + i) == c)
		i++;
	while (*(s + i))
	{
		while (*(s + i) && *(s + i) != c)
			i++;
		n_col++;
		return (ft_count_col(s, c, i, n_col));
	}
	return (n_col);
}

static size_t	ft_count_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*(s + i) && *(s + i) != c)
		i++;
	return (i);
}

static void	ft_row(char **buf, size_t count)
{
	if (count)
	{
		count--;
		ft_row(buf, count);
		free(*(buf + count));
		*buf = NULL;
	}
	free(buf);
}

char	**ft_split(char const *s, char c)
{
	char	**buf;
	size_t	n_col;
	size_t	i;

	n_col = ft_count_col((char *)s, c, 0, 0);
	buf = (char **)ft_calloc((n_col + 1), sizeof(char *));
	if (!buf)
		return (NULL);
	i = 0;
	while (i < n_col)
	{
		while (*s && *s == c)
			s++;
		*(buf + i) = ft_substr(s, 0, ft_count_len((char *)s, c));
		if (!*(buf + i))
		{
			ft_row(buf, i);
			return (NULL);
		}
		i++;
		s += ft_count_len(s, c);
	}
	*(buf + n_col) = NULL;
	return (buf);
}
