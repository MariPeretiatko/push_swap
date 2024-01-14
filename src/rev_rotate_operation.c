/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_operation.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperetia <mperetia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 22:20:05 by mperetia          #+#    #+#             */
/*   Updated: 2024/01/10 22:21:01 by mperetia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// // сдвинуть на 1 вниз все элементы стека 
// // последний элемент становится первым
int	reverse_rotate(t_lists **stack)
{
	t_lists	*head;
	t_lists	*tail;

	if (ft_lstsize(*stack) < 2)
		return (0);
	head = *stack;
	tail = ft_lstlast(head);
	while (head)
	{
		if (head->next->next == NULL)
		{
			head->next = NULL;
			break ;
		}
		head = head->next;
	}
	tail->next = *stack;
	*stack = tail;
	add_distance(stack);
	return (1);
}

void	rra(t_lists **stack_a)
{
	if (reverse_rotate(stack_a))
		ft_printf("rra\n");
}

// // сдвинуть на 1 вниз все элементы стека 
// // последний элемент становится первым
void	rrb(t_lists **stack_b)
{
	if (reverse_rotate(stack_b))
		ft_printf("rrb\n");
}

// // сдвинуть на 1 вниз все элементы стека 
// // последний элемент становится первым
// // два одновременно
void	rrr(t_lists **stack_a, t_lists **stack_b)
{
	if (reverse_rotate(stack_a) || reverse_rotate(stack_b))
		ft_printf("rrr\n");
}
