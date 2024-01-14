/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperetia <mperetia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 22:18:25 by mperetia          #+#    #+#             */
/*   Updated: 2024/01/10 22:19:44 by mperetia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	rotate(t_lists **stack)
{
	t_lists	*new_head;
	t_lists	*head_last;

	new_head = NULL;
	head_last = NULL;
	if (ft_lstsize(*stack) < 2)
		return (0);
	if (*stack)
	{
		head_last = *stack;
		new_head = (*stack)->next;
		*stack = new_head;
		head_last->next = NULL;
		ft_lstadd_back(stack, head_last);
	}
	add_distance(stack);
	return (1);
}

// // сдвинуть на 1 все элементы стека 
// // первый элемент становится последним
void	ra(t_lists **stack_a)
{
	if (rotate(stack_a))
		ft_printf("ra\n");
}

// // сдвинуть на 1 все элементы стека 
// // первый элемент становится последним
void	rb(t_lists **stack_b)
{
	if (rotate(stack_b))
		ft_printf("rb\n");
}

// // сдвинуть на 1 все элементы стека 
// // первый элемент становится последним
// // два одновременно
void	rr(t_lists **stack_a, t_lists **stack_b)
{
	if (rotate(stack_a) || rotate(stack_b))
		ft_printf("rr\n");
}
