/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:47:38 by pbencze           #+#    #+#             */
/*   Updated: 2024/02/01 17:12:09 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

int	ft_push(t_list **stack_from, t_list **stack_to)
{
	t_list	*temp;

	if (!*stack_from)
		return (0);
	temp = *stack_from;
	if ((*stack_from)->next)
		(*stack_from)->next->previous = NULL;
	*stack_from = (*stack_from)->next;
	ft_lstadd_front(stack_to, temp);
	return (0);
}

int	pa(t_list **stack_b, t_list **stack_a)
{
	return (ft_push(stack_b, stack_a));
}

int	pb(t_list **stack_a, t_list **stack_b)
{
	return (ft_push(stack_a, stack_b));
}
