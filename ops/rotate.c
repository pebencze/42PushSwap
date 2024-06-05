/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:48:02 by pbencze           #+#    #+#             */
/*   Updated: 2024/01/31 12:18:09 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_rotate(t_list **stack)
{
	t_list	*temp;

	if (!*stack || !(*stack)->next)
		return (1);
	temp = *stack;
	(*stack)->next->previous = NULL;
	*stack = (*stack)->next;
	ft_lstadd_back(stack, temp);
	return (0);
}

void	ra(t_list **stack_a)
{
	if (ft_rotate(stack_a) == 0)
		ft_printf("ra\n");
}

void	rb(t_list **stack_b)
{
	if (ft_rotate(stack_b) == 0)
		ft_printf("rb\n");
}

void	rr(t_list **stack_b, t_list	**stack_a)
{
	if (ft_rotate(stack_b) == 0 && ft_rotate(stack_a) == 0)
		ft_printf("rr\n");
}
