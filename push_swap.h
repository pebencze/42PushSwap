/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:28:40 by pbencze           #+#    #+#             */
/*   Updated: 2024/02/01 12:39:25 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "Ft_printf/ft_printf.h"
# include "Libft/libft.h"

int			check_args(char **args);
int			free_args(char **args);
t_list		*stack_init(char **args);
void		free_stacks(t_list **stack_a, t_list **stack_b);
int			ft_push(t_list **stack_from, t_list **stack_to);
void		pb(t_list **stack_a, t_list **stack_b);
void		pa(t_list **stack_b, t_list **stack_a);
int			ft_swap(t_list **stack);
void		sa(t_list **stack_a);
void		sb(t_list **stack_b);
void		ss(t_list	**stack_a, t_list **stack_b);
int			ft_rotate(t_list **stack);
void		ra(t_list **stack_a);
void		rb(t_list **stack_b);
void		rr(t_list	**stack_a, t_list **stack_b);
int			ft_reverse_rotate(t_list **stack);
void		rra(t_list **stack_a);
void		rrb(t_list **stack_b);
void		rrr(t_list **stack_a, t_list **stack_b);
void		ft_sort_stack(t_list **stack_a, t_list **stack_b);
void		sort_three(t_list **stack_a);
int			min_index(t_list **stack_a);
void		rotate_back(t_list **stack_a);
int			sorted(t_list **stack);
int			find_index(t_list **stack, int num);
int			ft_max(t_list **stack);
int			ft_min(t_list **stack);
int			future_index_b(t_list **stack_b, int num);
int			future_index_a(t_list **stack_a, int num);
int			opt_ab(t_list **stack_a, t_list **stack_b);
int			opt_rarrb(t_list **stack_a, t_list **stack_b, t_list *node);
int			opt_rrarb(t_list **stack_a, t_list **stack_b, t_list *node);
int			opt_rr(t_list **stack_a, t_list **stack_b, t_list *node);
int			opt_rrrr(t_list **stack_a, t_list **stack_b, t_list *node);
int			opt_ba(t_list **stack_a, t_list **stack_b);
int			opt_rarrb_ba(t_list **stack_a, t_list **stack_b, t_list *node);
int			opt_rrarb_ba(t_list **stack_a, t_list **stack_b, t_list *node);
int			opt_rr_ba(t_list **stack_a, t_list **stack_b, t_list *node);
int			opt_rrrr_ba(t_list **stack_a, t_list **stack_b, t_list *node);
void		btoa(t_list **stack_a, t_list **stack_b);
void		atob(t_list **stack_a, t_list **stack_b);
int			do_rrrr(t_list **stack_a, t_list **stack_b, t_list *node);
int			do_rr(t_list **stack_a, t_list **stack_b, t_list *node);
int			do_rrarb(t_list **stack_a, t_list **stack_b, t_list *node);
int			do_rarrb(t_list **stack_a, t_list **stack_b, t_list *node);
int			do_rrrr_ba(t_list **stack_a, t_list **stack_b, t_list *node);
int			do_rr_ba(t_list **stack_a, t_list **stack_b, t_list *node);
int			do_rrarb_ba(t_list **stack_a, t_list **stack_b, t_list *node);
int			do_rarrb_ba(t_list **stack_a, t_list **stack_b, t_list *node);

#endif
