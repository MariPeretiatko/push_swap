/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_operation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperetia <mperetia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 22:13:46 by mperetia          #+#    #+#             */
/*   Updated: 2024/01/10 22:15:28 by mperetia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	swap(t_lists **stack)
{
	t_lists	*head;
	t_lists	*next;
	int		tmp_val;
	int		tmp_index;

	if (ft_lstsize(*stack) < 2)
		return (0);
	head = *stack;
	next = head->next;
	if (!head && !next)
		return (0);
	tmp_val = head->value;
	tmp_index = head->index;
	head->value = next->value;
	head->index = next->index;
	next->value = tmp_val;
	next->index = tmp_index;
	add_distance(stack);
	return (1);
}

// //поменять местами 2 элемента в вершине стека
void	sa(t_lists **stack_a)
{
	if (swap(stack_a))
		ft_printf("sa\n");
}

// //поменять местами 2 элемента в вершине стека
void	sb(t_lists **stack_b)
{
	if (swap(stack_b))
		ft_printf("sb\n");
}

// //поменять местами 2 элемента в вершине двух стеков
void	ss(t_lists **stack_a, t_lists **stack_b)
{
	if (swap(stack_a) || swap(stack_b))
		ft_printf("ss\n");
}
