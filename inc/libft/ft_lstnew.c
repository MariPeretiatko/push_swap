/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperetia <mperetia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 21:08:10 by mperetia          #+#    #+#             */
/*   Updated: 2023/05/31 21:11:02 by mperetia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_obj;

	new_obj = (t_list *)malloc(sizeof(t_list));
	if (new_obj)
	{
		new_obj->content = content;
		new_obj->next = NULL;
	}
	return (new_obj);
}
