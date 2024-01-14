/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperetia <mperetia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 23:06:28 by mperetia          #+#    #+#             */
/*   Updated: 2023/05/31 10:58:59 by mperetia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	val;
	size_t			i;

	ptr = (unsigned char *)buf;
	val = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		ptr[i] = val;
		i++;
	}
	return (buf);
}
