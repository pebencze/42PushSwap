/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:47:59 by pbencze           #+#    #+#             */
/*   Updated: 2024/02/01 16:53:23 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

int	ft_swap(t_list **stack)
{
	int	temp;

	if (!*stack || !(*stack)->next)
		return (0);
	temp = (*stack)->content;
	(*stack)->content = (*stack)->next->content;
	(*stack)->next->content = temp;
	return (0);
}

int	sa(t_list **stack_a)
{
	return (ft_swap(stack_a));
}

int	sb(t_list **stack_b)
{
	return (ft_swap(stack_b));
}

int	ss(t_list **stack_b, t_list	**stack_a)
{
	if (ft_swap(stack_b) == 0 && ft_swap(stack_a) == 0)
		return (0);
	return (0);
}
