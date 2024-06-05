/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:33:58 by pbencze           #+#    #+#             */
/*   Updated: 2024/01/31 17:07:48 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_three(t_list **stack_a)
{
	int	first;
	int	second;
	int	third;

	first = ((*stack_a)->content);
	second = ((*stack_a)->next->content);
	third = ((*stack_a)->next->next->content);
	if (second > third && second > first)
	{
		rra(stack_a);
		sort_three(stack_a);
	}
	else if (first > third)
	{
		ra(stack_a);
		sort_three(stack_a);
	}
	else if (first > second)
		sa(stack_a);
}

void	rotate_back(t_list **stack_a)
{
	int	i;
	int	size;

	size = ft_lstsize(stack_a);
	i = min_index(stack_a);
	if (!sorted(stack_a))
	{
		if (i <= (size / 2 + size % 2))
		{
			while (--i)
				ra(stack_a);
		}
		else
		{
			i = (size - i + 2);
			while (--i)
				rra(stack_a);
		}
	}
}

int	sorted(t_list **stack)
{
	t_list	*temp;

	temp = *stack;
	while (temp->next)
	{
		if (temp->content > temp->next->content)
			return (0);
		temp = temp->next;
	}
	return (1);
}

void	ft_sort_stack(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(stack_a) == 2)
	{
		if ((*stack_a)->content > (*stack_a)->next->content)
			ra(stack_a);
		return ;
	}
	else if (ft_lstsize(stack_a) == 3)
		sort_three(stack_a);
	else if (ft_lstsize(stack_a) >= 4)
	{
		pb(stack_a, stack_b);
		if (!sorted(stack_a) && ft_lstsize(stack_a) > 3)
			pb(stack_a, stack_b);
		atob(stack_a, stack_b);
	}
}
