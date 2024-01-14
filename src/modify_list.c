/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modify_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperetia <mperetia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 00:48:54 by mperetia          #+#    #+#             */
/*   Updated: 2024/01/12 00:51:27 by mperetia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	add_price(t_lists **stack)
{
	t_lists	*head;
	int		price;
	int		i;
	int		len;

	i = 0;
	head = (*stack);
	price = 0;
	len = ft_lstsize(head);
	while (head)
	{
		if (head->next == NULL)
		{
			head->price = 1;
			break ;
		}
		head->price = price;
		if (i < len / 2)
			price++;
		else
			price--;
		i++;
		head = head->next;
	}
}

void	add_distance(t_lists **stack)
{
	t_lists	*head;
	int		distance;

	head = (*stack);
	distance = 0;
	while (head)
	{
		head->distance = distance;
		distance++;
		head = head->next;
	}
}
