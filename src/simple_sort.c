/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperetia <mperetia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:06:14 by mperetia          #+#    #+#             */
/*   Updated: 2024/01/12 01:02:52 by mperetia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort2(t_lists **stack)
{
	sa(stack);
}

void	sort3(t_lists **stack_a)
{
	int	first;
	int	second;
	int	third;

	if (!(*stack_a)->next->next)
		return ;
	first = (*stack_a)->value;
	second = (*stack_a)->next->value;
	third = (*stack_a)->next->next->value;
	if (first < third && third < second)
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if (first > third && first < second)
		rra(stack_a);
	else if (second < third && third < first)
		ra(stack_a);
	else if (first > second && first < third)
		sa(stack_a);
	else if (first > second && second > third)
	{
		sa(stack_a);
		rra(stack_a);
	}
}

void	sort4(t_lists **stack_a, t_lists **stack_b)
{
	int	distance;

	distance = get_distance(stack_a, get_min_index(stack_a, -1));
	if (distance == 1)
		ra(stack_a);
	else if (distance == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (distance == 3)
		rra(stack_a);
	if (check_sort(stack_a))
		return ;
	pb(stack_a, stack_b);
	sort3(stack_a);
	pa(stack_a, stack_b);
}

void	sort5(t_lists **stack_a, t_lists **stack_b)
{
	int	distance;

	distance = get_distance(stack_a, get_min_index(stack_a, -1));
	if (distance == 1)
		ra(stack_a);
	else if (distance == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (distance == 3)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if (distance == 4)
		rra(stack_a);
	if (check_sort(stack_a))
		return ;
	pb(stack_a, stack_b);
	sort4(stack_a, stack_b);
	pa(stack_a, stack_b);
}
