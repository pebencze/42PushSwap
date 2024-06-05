/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:47:38 by pbencze           #+#    #+#             */
/*   Updated: 2024/02/01 17:11:27 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_push(t_list **stack_from, t_list **stack_to)
{
	t_list	*temp;

	if (!*stack_from)
		return (1);
	temp = *stack_from;
	*stack_from = (*stack_from)->next;
	if (*stack_from)
		(*stack_from)->previous = NULL;
	ft_lstadd_front(stack_to, temp);
	return (0);
}

void	pa(t_list **stack_b, t_list **stack_a)
{
	if (ft_push(stack_b, stack_a) == 0)
		ft_printf("pa\n");
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	if (ft_push(stack_a, stack_b) == 0)
		ft_printf("pb\n");
}
