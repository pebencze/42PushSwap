/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:07:43 by pbencze           #+#    #+#             */
/*   Updated: 2024/02/01 17:02:09 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

int	sorted(t_list **stack)
{
	t_list	*temp;

	if (!(*stack))
		return (0);
	temp = *stack;
	while (temp->next)
	{
		if (temp->content > temp->next->content)
			return (0);
		temp = temp->next;
	}
	return (1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (!s1)
		return (1);
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	cmp_instruction(char *in)
{
	if ((ft_strcmp(in, "pa\n") == 0)
		|| (ft_strcmp(in, "pb\n") == 0)
		|| (ft_strcmp(in, "sa\n") == 0)
		|| (ft_strcmp(in, "sb\n") == 0)
		|| (ft_strcmp(in, "ss\n") == 0)
		|| (ft_strcmp(in, "ra\n") == 0)
		|| (ft_strcmp(in, "rb\n") == 0)
		|| (ft_strcmp(in, "rr\n") == 0)
		|| (ft_strcmp(in, "rra\n") == 0)
		|| (ft_strcmp(in, "rrb\n") == 0)
		|| (ft_strcmp(in, "rrr\n") == 0))
		return (0);
	else
		return (1);
}

int	do_instruction(char *in, t_list **stack_a, t_list **stack_b)
{
	if (ft_strcmp(in, "pa\n") == 0)
		return (pa(stack_b, stack_a));
	else if (ft_strcmp(in, "pb\n") == 0)
		return (pb(stack_a, stack_b));
	else if (ft_strcmp(in, "sa\n") == 0)
		return (sa(stack_a));
	else if (ft_strcmp(in, "sb\n") == 0)
		return (sb(stack_b));
	else if (ft_strcmp(in, "ss\n") == 0)
		return (ss(stack_a, stack_b));
	else if (ft_strcmp(in, "ra\n") == 0)
		return (ra(stack_a));
	else if (ft_strcmp(in, "rb\n") == 0)
		return (rb(stack_b));
	else if (ft_strcmp(in, "rr\n") == 0)
		return (rr(stack_a, stack_b));
	else if (ft_strcmp(in, "rra\n") == 0)
		return (rra(stack_a));
	else if (ft_strcmp(in, "rrb\n") == 0)
		return (rrb(stack_b));
	else if (ft_strcmp(in, "rrr\n") == 0)
		return (rrr(stack_a, stack_b));
	return (0);
}
