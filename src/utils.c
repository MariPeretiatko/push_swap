/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperetia <mperetia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 22:21:56 by mperetia          #+#    #+#             */
/*   Updated: 2024/01/12 00:17:53 by mperetia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_str_is_num(char *str)
{
	int	i;

	i = 1;
	if (ft_isdigit(str[0]) || ((str[0] == '+' || str[0] == '-' ) && str[1]))
	{
		while (str[i])
		{
			if (!(ft_isdigit(str[i])))
				return (0);
			i++;
		}
	}
	else
		return (0);
	return (1);
}

long	ft_atoi(const char *str)
{
	long	neg;
	int		i;
	long	num;

	i = 0;
	neg = 1;
	num = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * neg);
}

int	check_duplicat(t_lists *stack_a, int num)
{
	if (!stack_a)
		return (1);
	while (stack_a)
	{
		if (stack_a->value == num)
			return (0);
		stack_a = stack_a->next;
	}
	return (1);
}

void	print_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

t_lists	*init_stack_a(int ac, char **av)
{
	t_lists	*head;
	int		i;
	long	num;

	(void)ac;
	i = 1;
	head = NULL;
	while (av[i])
	{
		if (ft_str_is_num(av[i]))
		{
			num = ft_atoi(av[i]);
			if (!check_max_min(num) || !check_duplicat(head, num))
				print_error();
			if (!head)
				(head) = ft_lstnew(i, num);
			else
				ft_lstadd_back(&head, ft_lstnew(i, num));
		}
		else
			print_error();
		i++;
	}
	return (head);
}
