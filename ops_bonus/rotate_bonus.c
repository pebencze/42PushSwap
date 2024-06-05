/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:48:02 by pbencze           #+#    #+#             */
/*   Updated: 2024/02/01 16:52:43 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

int	ft_rotate(t_list **stack)
{
	t_list	*temp;

	if (!*stack || !(*stack)->next)
		return (0);
	temp = *stack;
	(*stack)->next->previous = NULL;
	*stack = (*stack)->next;
	ft_lstadd_back(stack, temp);
	return (0);
}

int	ra(t_list **stack_a)
{
	return (ft_rotate(stack_a));
}

int	rb(t_list **stack_b)
{
	return (ft_rotate(stack_b));
}

int	rr(t_list **stack_b, t_list	**stack_a)
{
	if (ft_rotate(stack_b) == 0 && ft_rotate(stack_a) == 0)
		return (0);
	return (0);
}
