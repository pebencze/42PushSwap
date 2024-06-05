/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:44:23 by pbencze           #+#    #+#             */
/*   Updated: 2024/01/26 20:23:51 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_reverse_rotate(t_list **stack)
{
	t_list	*temp;

	if (!*stack || !(*stack)->next)
		return (1);
	temp = ft_lstlast(*stack);
	temp->previous->next = NULL;
	ft_lstadd_front(stack, temp);
	return (0);
}

void	rra(t_list **stack_a)
{
	if (ft_reverse_rotate(stack_a) == 0)
		ft_printf("rra\n");
}

void	rrb(t_list **stack_b)
{
	if (ft_reverse_rotate(stack_b) == 0)
		ft_printf("rrb\n");
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	if (ft_reverse_rotate(stack_b) == 0 && ft_reverse_rotate(stack_a) == 0)
		ft_printf("rrr\n");
}
