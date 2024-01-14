/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperetia <mperetia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:03:27 by mperetia          #+#    #+#             */
/*   Updated: 2024/01/12 00:33:21 by mperetia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	sort(t_lists **stack_a, t_lists **stack_b)
{
	int		pivot;

	init_index(stack_a);
	if (ft_lstlast(*stack_a)->distance < 3)
	{
		if (!check_sort(stack_a))
			sort3(stack_a);
		return (1);
	}
	pivot = ft_lstsize(*stack_a) / 2;
	while (ft_lstlast(*stack_a)->distance != pivot && ft_lstsize(*stack_a) > 3)
	{
		if ((*stack_a)->index <= pivot)
			pb(stack_a, stack_b);
		else
			ra(stack_a);
	}
	return (sort(stack_a, stack_b));
}

void	final_price(t_lists **stack_a, t_lists **stack_b)
{
	t_lists	*head_a;
	t_lists	*head_b;
	t_lists	*node;
	long	best_match;

	head_b = *stack_b;
	while (head_b)
	{
		head_a = *stack_a;
		best_match = LONG_MAX;
		while (head_a)
		{
			if (head_a->value > head_b->value
				&& head_a->value < best_match)
			{
				best_match = head_a->value;
				node = head_a;
			}
			head_a = head_a->next;
		}
		head_b->final_price = node->price + head_b->price;
		head_b->target_value = best_match;
		head_b = head_b->next;
	}
}

void	final_rotate(t_lists **stack_a, t_lists **stack_b,
	t_lists *inner_node, t_lists *node)
{
	int	size_a;
	int	size_b;

	size_a = ft_lstsize(*stack_a) / 2;
	size_b = ft_lstsize(*stack_b) / 2;
	while ((*stack_b)->value != node->value)
	{
		if (node->distance < size_b)
			rb(stack_b);
		else
			rrb(stack_b);
	}
	while ((*stack_a)->value != inner_node->value)
	{
		if (inner_node->distance < size_a)
			ra(stack_a);
		else
			rra(stack_a);
	}
	pa(stack_a, stack_b);
}

t_lists	*get_target_node(t_lists **stack_b)
{
	t_lists	*target_node;
	t_lists	*head_b;

	head_b = *stack_b;
	target_node = *stack_b;
	while (head_b)
	{
		if (head_b->final_price < target_node->final_price)
			target_node = head_b;
		else if (head_b->final_price == target_node->final_price)
		{
			if (head_b->value < target_node->value)
				target_node = head_b;
		}
		head_b = head_b->next;
	}
	return (target_node);
}

void	final_sort(t_lists **stack_a, t_lists **stack_b)
{
	t_lists	*target_node;
	t_lists	*inner_node;
	t_lists	*head_b;
	t_lists	*head_a;

	add_price(stack_a);
	add_price(stack_b);
	final_price(stack_a, stack_b);
	head_b = *stack_b;
	head_a = *stack_a;
	target_node = get_target_node(stack_b);
	while (target_node->target_value != head_a->value)
		head_a = head_a->next;
	inner_node = head_a;
	final_rotate(stack_a, stack_b, inner_node, target_node);
}
// head_a = (*stack_a);
// while (head_b)
// 	{
// 		if (head_b->final_price < target_node->final_price)
// 			target_node = head_b;
// 		else if (head_b->final_price == target_node->final_price)
// 		{
// 			if (head_b->value < target_node->value)
// 				target_node = head_b;
// 		}
// 		head_b = head_b->next;
// 	}
