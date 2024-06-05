/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_push_btoa.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 20:07:29 by pbencze           #+#    #+#             */
/*   Updated: 2024/01/31 16:29:56 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	do_rarrb_ba(t_list **stack_a, t_list **stack_b, t_list *node)
{
	int	num;

	num = node->content;
	while (num != (*stack_b)->content)
		rb(stack_b);
	while (future_index_a(stack_a, num) != 0)
		ra(stack_a);
	pa(stack_b, stack_a);
	return (-1);
}

int	do_rrarb_ba(t_list **stack_a, t_list **stack_b, t_list *node)
{
	int	num;

	num = node->content;
	while (num != (*stack_b)->content)
		rb(stack_b);
	while (future_index_a(stack_a, num) != 0)
		rra(stack_a);
	pa(stack_b, stack_a);
	return (-1);
}

int	do_rr_ba(t_list **stack_a, t_list **stack_b, t_list *node)
{
	int	num;

	num = node->content;
	while (num != (*stack_b)->content && future_index_a(stack_a, num) != 0)
		rr(stack_a, stack_b);
	while (num != (*stack_b)->content)
		rb(stack_b);
	while (future_index_a(stack_a, num) != 0)
		ra(stack_a);
	pa(stack_b, stack_a);
	return (-1);
}

int	do_rrrr_ba(t_list **stack_a, t_list **stack_b, t_list *node)
{
	int	num;

	num = node->content;
	while (num != (*stack_b)->content && future_index_a(stack_a, num) != 0)
		rrr(stack_a, stack_b);
	while (num != (*stack_b)->content)
		rrb(stack_b);
	while (future_index_a(stack_a, num) != 0)
		rra(stack_a);
	pa(stack_b, stack_a);
	return (-1);
}
