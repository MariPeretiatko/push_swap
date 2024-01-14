/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperetia <mperetia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:34:36 by mperetia          #+#    #+#             */
/*   Updated: 2023/05/31 14:09:19 by mperetia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_apply(char *s, char (*f)(unsigned int, char), int i, char *str)
{
	if (*s)
	{
		*str = (*f)(i, *s);
		s++;
		i++;
		str++;
		return (ft_apply(s, f, i, str));
	}
	*str = '\0';
	return (str - i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_s;

	if (!f || !s)
		return (NULL);
	new_s = malloc(ft_strlen(s) + 1);
	if (!new_s)
		return (NULL);
	new_s = ft_apply((char *)s, f, 0, new_s);
	return (new_s);
}
