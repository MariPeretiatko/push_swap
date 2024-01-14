/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperetia <mperetia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:05:46 by mperetia          #+#    #+#             */
/*   Updated: 2024/01/12 00:57:56 by mperetia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <stdlib.h>
# include "inc/libft/libft.h"
# include "inc/ft_printf/ft_printf.h"

typedef struct s_lists
{
	int				index;
	int				distance;
	int				price;
	int				value;
	int				target_value;
	int				final_price;
	struct s_lists	*next;
}	t_lists;

t_lists	*init_stack_a(int ac, char **av);
void	ft_lstadd_front(t_lists **lst, t_lists *new);
t_lists	*ft_lstnew(int index, int value);
t_lists	*ft_lstlast(t_lists *lst);
void	ft_lstadd_back(t_lists **lst, t_lists *new);
int		ft_lstsize(t_lists *lst);
void	ft_listclear(t_lists **lst);
void	simple_sort(t_lists **stack_a, t_lists **stack_b, int ac);
int		find_min(t_lists **stack);
int		get_min_val(t_lists **stack, int min, int index);
int		check_sort(t_lists **stack);
int		check_max_min(long num);

void	init_index(t_lists **stack);
int		get_distance(t_lists **stack, int index);
int		get_min_index(t_lists **stack, int val);
void	add_price(t_lists **stack);
void	add_distance(t_lists **stack);

void	final_price(t_lists **stack_a, t_lists **stack_b);
void	final_sort(t_lists **stack_a, t_lists **stack_b);
void	sort_insertion(t_lists **stack_a, t_lists **stack_b);

int		sort(t_lists **stack_a, t_lists **stack_b);
void	sort2(t_lists **stack);
void	sort3(t_lists **stack_a);
void	sort4(t_lists **stack_a, t_lists **stack_b);
void	sort5(t_lists **stack_a, t_lists **stack_b);

void	sa(t_lists **stack_a);
void	sb(t_lists **stack_b);
void	ss(t_lists **stack_a, t_lists **stack_b);
void	pa(t_lists **stack_a, t_lists **stack_b);
void	pb(t_lists **stack_a, t_lists **stack_b);
void	ra(t_lists **stack_a);
void	rb(t_lists **stack_b);
void	rr(t_lists **stack_a, t_lists **stack_b);
void	rra(t_lists **stack_a);
void	rrb(t_lists **stack_b);
void	rrr(t_lists **stack_a, t_lists **stack_b);

#endif