/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperetia <mperetia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:05:28 by mperetia          #+#    #+#             */
/*   Updated: 2024/01/12 00:45:22 by mperetia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	simple_sort(t_lists **stack_a, t_lists **stack_b, int ac)
{
	if (ac == 3)
		sort2(stack_a);
	if (ac == 4)
		sort3(stack_a);
	if (ac == 5)
		sort4(stack_a, stack_b);
	if (ac == 6)
		sort5(stack_a, stack_b);
}

void	final(t_lists **stack)
{
	t_lists	*head;
	int		count_distance;
	int		len;

	head = *stack;
	len = ft_lstsize(head);
	if (!check_sort(&head))
	{
		add_distance(&head);
		while (head->next)
		{
			if (head->value > head->next->value)
				count_distance = head->distance;
			head = head->next;
		}
		while (!check_sort(stack))
		{
			if (count_distance <= len / 2)
				ra(stack);
			else
				rra(stack);
		}
	}
}

int	main(int ac, char *av[])
{
	t_lists	*stack_a;
	t_lists	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	stack_a = init_stack_a(ac, av);
	if (!stack_a)
		return (0);
	if (!check_sort(&stack_a))
	{
		init_index(&stack_a);
		add_price(&stack_a);
		add_distance(&stack_a);
		if (ac <= 6)
			simple_sort(&stack_a, &stack_b, ac);
		else
		{
			sort(&stack_a, &stack_b);
			while (stack_b)
				final_sort(&stack_a, &stack_b);
		}
	}
	final(&stack_a);
	ft_listclear(&stack_a);
	return (0);
}
