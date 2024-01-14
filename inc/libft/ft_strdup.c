/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperetia <mperetia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:09:19 by mperetia          #+#    #+#             */
/*   Updated: 2023/06/01 13:53:20 by mperetia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	size_t	i;
	char	*new_str;

	len = ft_strlen(str);
	new_str = (char *)malloc((len + 1) * sizeof(char));
	i = 0;
	if (new_str)
	{
		while (i < len)
		{
			new_str[i] = str[i];
			i++;
		}
		new_str[i] = '\0';
	}
	else
		return (NULL);
	return (new_str);
}
