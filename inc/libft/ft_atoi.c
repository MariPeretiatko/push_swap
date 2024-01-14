/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperetia <mperetia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:06:18 by mperetia          #+#    #+#             */
/*   Updated: 2023/11/05 02:22:23 by mperetia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// static void	ft_print_digit(const char *str, size_t i, size_t *res)
// {
// 	if (str + i && (*(str + i) >= '0' && *(str + i) <= '9'))
// 	{
// 		*res *= 10;
// 		*res += *(str + i) - '0';
// 		i++;
// 		return (ft_print_digit(str, i, res));
// 	}
// 	else
// 		return ;
// }

// static int	ft_check_spaces(const char *str)
// {
// 	if (str && (*str == ' ' || *str == '\n'
// 			|| *str == '\t' || *str == '\v'
// 			|| *str == '\r' || *str == '\f'))
// 		return (1);
// 	return (0);
// }

// int	ft_atoi(const char *str)
// {
// 	size_t	i;
// 	int		sign;
// 	size_t	res;

// 	i = 0;
// 	sign = 1;
// 	res = 0;
// 	while (ft_check_spaces(str + i))
// 		i++;
// 	if (*(str + i) == '+')
// 		i++;
// 	else if (*(str + i) == '-')
// 	{
// 		sign = -1;
// 		i++;
// 	}
// 	if (!(*(str + i) >= '0' && *(str + i) <= '9'))
// 		return (0);
// 	ft_print_digit(str + i, 0, &res);
// 	return (res * sign);
// }
// int		ft_atoi(const char *str)
// {
// 	int neg;
// 	int i;
// 	int num;

// 	i = 0;
// 	neg = 1;
// 	num = 0;
// 	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
// 			|| str[i] == '\f' || str[i] == '\r')
// 		i++;
// 	if (str[i] == '-' || str[i] == '+')
// 	{
// 		if (str[i] == '-')
// 			neg *= -1;
// 		i++;
// 	}
// 	while (str[i] >= 48 && str[i] <= 57)
// 	{
// 		num = num * 10 + (str[i] - 48);
// 		i++;
// 	}
// 	return (num * neg);
// }
