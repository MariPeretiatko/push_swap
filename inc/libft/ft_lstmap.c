/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperetia <mperetia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 21:27:05 by mperetia          #+#    #+#             */
/*   Updated: 2023/11/05 02:17:52 by mperetia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list	*new_node;
// 	t_list	*new_list;

// 	new_list = NULL;
// 	while (lst)
// 	{
// 		new_node = ft_lstnew(f(lst->content));
// 		if (!new_node)
// 		{
// 			ft_lstclear(&new_list, del);
// 			break ;
// 		}
// 		ft_lstadd_back(&new_list, new_node);
// 		lst = lst->next;
// 	}
// 	return (new_list);
// }
