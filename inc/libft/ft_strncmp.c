/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperetia <mperetia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:02:21 by mperetia          #+#    #+#             */
/*   Updated: 2023/05/31 02:23:48 by mperetia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned char	*tmp_str1;
	unsigned char	*tmp_str2;
	size_t			i;

	i = 0;
	tmp_str1 = (unsigned char *)str1;
	tmp_str2 = (unsigned char *)str2;
	if (!n)
		return (0);
	while (i < n)
	{
		if (tmp_str1[i] < tmp_str2[i])
			return (-1);
		if (tmp_str1[i] > tmp_str2[i])
			return (1);
		if (tmp_str1[i] == '\0' || tmp_str2[i] == '\0')
			break ;
		i++;
	}
	return (0);
}
