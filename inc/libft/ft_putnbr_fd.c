/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperetia <mperetia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 20:06:46 by mperetia          #+#    #+#             */
/*   Updated: 2023/06/01 13:45:11 by mperetia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_print_num(unsigned long num, int fd)
{
	if (num >= 10)
		ft_print_num(num / 10, fd);
	ft_putchar_fd(num % 10 + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned long	num;
	int				sign;

	sign = 0;
	if (n < 0)
	{
		num = (long)n * (-1);
		sign = 1;
	}
	else
		num = (unsigned long)n;
	if (sign)
		ft_putchar_fd('-', fd);
	ft_print_num(num, fd);
}
