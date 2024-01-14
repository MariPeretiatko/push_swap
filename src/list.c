/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperetia <mperetia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 01:48:33 by mperetia          #+#    #+#             */
/*   Updated: 2024/01/10 23:49:55 by mperetia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstadd_back(t_lists **lst, t_lists *new)
{
	if (!lst)
		return ;
	if (lst)
	{
		if (*lst)
		{
			ft_lstlast(*lst)->next = new;
			return ;
		}
	}
	*lst = new;
}

t_lists	*ft_lstnew(int index, int value)
{
	t_lists	*new_obj;

	new_obj = (t_lists *)malloc(sizeof(t_lists));
	if (new_obj)
	{
		new_obj->index = index - 1;
		new_obj->value = value;
		new_obj->next = NULL;
	}
	return (new_obj);
}

t_lists	*ft_lstlast(t_lists *lst)
{
	if (lst)
	{
		while (lst->next)
		{
			lst = lst->next;
		}
	}
	return (lst);
}

int	ft_lstsize(t_lists *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

void	ft_listclear(t_lists **lst)
{
	t_lists	*head;

	while (*lst)
	{
		head = (*lst)->next;
		free(*lst);
		(*lst) = head;
	}
}
// t_lists *ft_lstlast(t_lists *lst)
// {
//     t_lists *node;
//     node = lst;
//     if (node != NULL)
//     {
//         while (node->next != NULL)
//             node = node->next;
//     }
//     return (node);
// }