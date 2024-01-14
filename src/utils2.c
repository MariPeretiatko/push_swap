/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperetia <mperetia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 23:13:48 by mperetia          #+#    #+#             */
/*   Updated: 2024/01/12 00:21:09 by mperetia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_sort(t_lists **stack)
{
	int	min;

	min = (*stack)->value;
	while ((*stack))
	{
		if (min > (*stack)->value)
			return (0);
		min = (*stack)->value;
		stack = &(*stack)->next;
	}
	return (1);
}

void	init_index(t_lists **stack)
{
	int		index;
	int		min;
	t_lists	*head;

	index = 1;
	head = *stack;
	min = find_min(&head);
	while (index < ft_lstsize(*stack))
	{
		min = get_min_val(&head, min, index);
		index++;
	}
}

int	check_max_min(long num)
{
	if (num > INT_MAX || num < INT_MIN)
		return (0);
	return (1);
}

void	ft_lstadd_front(t_lists **lst, t_lists *new)
{
	if (!lst)
		return ;
	if (new)
	{
		new->next = *lst;
		*lst = new;
	}
}
