/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperetia <mperetia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:03:00 by mperetia          #+#    #+#             */
/*   Updated: 2023/05/31 10:52:29 by mperetia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	size_t				i;
	const unsigned char	*tmp_ptr;

	i = 0;
	tmp_ptr = (unsigned char *)ptr;
	while (i < num)
	{
		if (*(tmp_ptr + i) == (unsigned char)value)
			return ((void *)tmp_ptr + i);
		i++;
	}
	return (NULL);
}
