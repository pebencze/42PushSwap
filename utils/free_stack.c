/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:28:49 by pbencze           #+#    #+#             */
/*   Updated: 2024/02/01 12:36:11 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_stacks(t_list **stack_a, t_list **stack_b)
{
	t_list	*next;

	if (stack_a)
	{
		while (*stack_a)
		{
			next = (*stack_a)->next;
			free(*stack_a);
			*stack_a = next;
		}
		free(stack_a);
	}
	if (stack_b)
	{
		while (*stack_b)
		{
			next = (*stack_b)->next;
			free(*stack_b);
			*stack_b = next;
		}
		free(stack_b);
	}
}
