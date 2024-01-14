/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperetia <mperetia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:05:51 by mperetia          #+#    #+#             */
/*   Updated: 2023/05/31 22:17:31 by mperetia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*(needle))
		return ((char *)haystack);
	while (*(haystack + i) && i < len)
	{
		j = 0;
		while (haystack + i + j && *(haystack + i + j)
			&& needle + j && *(needle + j) && i + j < len)
		{
			if (*(haystack + i + j) == *(needle + j))
				j++;
			else
				break ;
		}
		if (needle + j && !*(needle + j))
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
