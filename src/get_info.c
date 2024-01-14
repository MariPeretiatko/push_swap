/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_info.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperetia <mperetia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 00:49:04 by mperetia          #+#    #+#             */
/*   Updated: 2024/01/12 00:51:49 by mperetia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_distance(t_lists **stack, int index)
{
	t_lists	*head;
	int		distance;

	distance = 0;
	head = *stack;
	while (head)
	{
		if (head->index == index)
			break ;
		distance++;
		head = head->next;
	}
	return (head->distance);
}

int	find_min(t_lists **stack)
{
	t_lists	*head;
	int		min;

	head = *stack;
	min = 2147483647;
	while (head)
	{
		if (head->value < min)
		{
			min = head->value;
			head->index = 0;
		}
		head = head->next;
	}
	return (min);
}

int	get_min_val(t_lists **stack, int min, int index)
{
	int		min2;
	t_lists	*head;

	head = *stack;
	min2 = min;
	while (head)
	{
		if (head->value > min)
		{
			min2 = head->value;
			break ;
		}
		head = head->next;
	}
	head = *stack;
	while (head)
	{
		if (head->value > min && head->value <= min2)
		{
			min2 = head->value;
			head->index = index;
		}
		head = head->next;
	}
	return (min2);
}

int	get_min_index(t_lists **stack, int val)
{
	t_lists	*head;
	int		min;

	head = *stack;
	min = head->index;
	while (head->next)
	{
		head = head->next;
		if ((head->index < min) && head->index != val)
			min = head->index;
	}
	return (min);
}
