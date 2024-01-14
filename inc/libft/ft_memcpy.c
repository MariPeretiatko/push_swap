/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperetia <mperetia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 23:08:18 by mperetia          #+#    #+#             */
/*   Updated: 2023/05/31 00:57:24 by mperetia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*tmp_dst;
	const unsigned char	*tmp_src;
	size_t				i;

	tmp_dst = (unsigned char *)dst;
	tmp_src = (const unsigned char *)src;
	i = 0;
	while (i < n && (tmp_dst + i != tmp_src))
	{
		*(tmp_dst + i) = *(tmp_src + i);
		i++;
	}
	return (dst);
}
