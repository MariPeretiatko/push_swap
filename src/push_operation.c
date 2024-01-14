/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_operation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperetia <mperetia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 22:13:30 by mperetia          #+#    #+#             */
/*   Updated: 2024/01/10 22:17:49 by mperetia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	push(t_lists **stack_dst, t_lists **stack_src)
{
	t_lists	*new_head;

	new_head = NULL;
	if (ft_lstsize(*stack_src) == 0)
		return (0);
	if (*stack_src)
		new_head = (*stack_src)->next;
	ft_lstadd_front(stack_dst, *stack_src);
	*stack_src = new_head;
	add_distance(stack_dst);
	add_distance(stack_src);
	return (1);
}

// //взять первый элемент в В и поместить в вершину А
void	pa(t_lists **stack_a, t_lists **stack_b)
{
	if (push(stack_a, stack_b))
		ft_printf("pa\n");
}

// //взять первый элемент в А и поместить в вершину В
void	pb(t_lists **stack_a, t_lists **stack_b)
{
	if (push(stack_b, stack_a))
		ft_printf("pb\n");
}
