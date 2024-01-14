/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperetia <mperetia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:01:40 by mperetia          #+#    #+#             */
/*   Updated: 2023/05/31 12:26:58 by mperetia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	count;

	count = ft_strlen(str);
	while (count + 1)
	{
		if (*(str + count) == (char)c)
			return ((char *)str + count);
		count--;
	}
	return (NULL);
}
