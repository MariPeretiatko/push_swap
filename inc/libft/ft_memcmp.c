/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperetia <mperetia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:03:22 by mperetia          #+#    #+#             */
/*   Updated: 2023/05/31 13:11:38 by mperetia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	unsigned char	*tmp_ptr1;
	unsigned char	*tmp_ptr2;
	size_t			i;

	tmp_ptr1 = (unsigned char *)ptr1;
	tmp_ptr2 = (unsigned char *)ptr2;
	i = 0;
	while (i < n)
	{
		if (tmp_ptr1[i] == tmp_ptr2[i])
			i++;
		else
			return (tmp_ptr1[i] - tmp_ptr2[i]);
	}
	return (0);
}
