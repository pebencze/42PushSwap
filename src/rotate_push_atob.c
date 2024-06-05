/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_push_atob.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 20:07:29 by pbencze           #+#    #+#             */
/*   Updated: 2024/01/31 16:29:42 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	do_rarrb(t_list **stack_a, t_list **stack_b, t_list *node)
{
	int	num;

	num = node->content;
	while (num != (*stack_a)->content)
		ra(stack_a);
	while (future_index_b(stack_b, num) != 0)
		rrb(stack_b);
	pb(stack_a, stack_b);
	return (-1);
}

int	do_rrarb(t_list **stack_a, t_list **stack_b, t_list *node)
{
	int	num;

	num = node->content;
	while (num != (*stack_a)->content)
		rra(stack_a);
	while (future_index_b(stack_b, num) != 0)
		rb(stack_b);
	pb(stack_a, stack_b);
	return (-1);
}

int	do_rr(t_list **stack_a, t_list **stack_b, t_list *node)
{
	int	num;

	num = node->content;
	while (num != (*stack_a)->content && future_index_b(stack_b, num) != 0)
		rr(stack_a, stack_b);
	while (num != (*stack_a)->content)
		ra(stack_a);
	while (future_index_b(stack_b, num) != 0)
		rb(stack_b);
	pb(stack_a, stack_b);
	return (-1);
}

int	do_rrrr(t_list **stack_a, t_list **stack_b, t_list *node)
{
	int	num;

	num = node->content;
	while (num != (*stack_a)->content && future_index_b(stack_b, num) != 0)
		rrr(stack_a, stack_b);
	while (num != (*stack_a)->content)
		rra(stack_a);
	while (future_index_b(stack_b, num) != 0)
		rrb(stack_b);
	pb(stack_a, stack_b);
	return (-1);
}
