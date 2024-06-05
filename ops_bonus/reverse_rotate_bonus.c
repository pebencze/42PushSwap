/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:44:23 by pbencze           #+#    #+#             */
/*   Updated: 2024/02/01 16:52:59 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

int	ft_reverse_rotate(t_list **stack)
{
	t_list	*temp;

	if (!*stack || !(*stack)->next)
		return (0);
	temp = ft_lstlast(*stack);
	temp->previous->next = NULL;
	ft_lstadd_front(stack, temp);
	return (0);
}

int	rra(t_list **stack_a)
{
	return (ft_reverse_rotate(stack_a));
}

int	rrb(t_list **stack_b)
{
	return (ft_reverse_rotate(stack_b));
}

int	rrr(t_list **stack_a, t_list **stack_b)
{
	if (ft_reverse_rotate(stack_b) == 0 && ft_reverse_rotate(stack_a) == 0)
		return (0);
	return (0);
}
