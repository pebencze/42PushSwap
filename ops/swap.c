/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:47:59 by pbencze           #+#    #+#             */
/*   Updated: 2024/01/24 14:27:55 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_swap(t_list **stack)
{
	int	temp;

	if (!*stack || !(*stack)->next)
		return (1);
	temp = (*stack)->content;
	(*stack)->content = (*stack)->next->content;
	(*stack)->next->content = temp;
	return (0);
}

void	sa(t_list **stack_a)
{
	if (ft_swap(stack_a) == 0)
		ft_printf("sa\n");
}

void	sb(t_list **stack_b)
{
	if (ft_swap(stack_b) == 0)
		ft_printf("sb\n");
}

void	ss(t_list **stack_b, t_list	**stack_a)
{
	if (ft_swap(stack_b) == 0 && ft_swap(stack_a) == 0)
		ft_printf("ss\n");
}
