/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_rotate_option_ab.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:05:25 by pbencze           #+#    #+#             */
/*   Updated: 2024/01/31 14:45:37 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	opt_rr(t_list **stack_a, t_list **stack_b, t_list *node)
{
	int	num;
	int	i;

	num = node->content;
	i = future_index_b(stack_b, num);
	if (i < find_index(stack_a, num))
		i = find_index(stack_a, num);
	return (i);
}

int	opt_rrrr(t_list **stack_a, t_list **stack_b, t_list *node)
{
	int	num;
	int	i;

	num = node->content;
	i = 0;
	if (future_index_b(stack_b, num))
		i = ft_lstsize(stack_b) - future_index_b(stack_b, num);
	if (find_index(stack_a, num))
	{
		if (i < (ft_lstsize(stack_a) - find_index(stack_a, num)))
			i = ft_lstsize(stack_a) - find_index(stack_a, num);
	}
	return (i);
}

int	opt_rrarb(t_list **stack_a, t_list **stack_b, t_list *node)
{
	int	num;
	int	i;

	num = node->content;
	i = 0;
	if (find_index(stack_a, num))
		i = ft_lstsize(stack_a) - find_index(stack_a, num);
	i += future_index_b(stack_b, num);
	return (i);
}

int	opt_rarrb(t_list **stack_a, t_list **stack_b, t_list *node)
{
	int	num;
	int	i;

	num = node->content;
	i = 0;
	if (future_index_b(stack_b, num))
		i = ft_lstsize(stack_b) - future_index_b(stack_b, num);
	i += find_index(stack_a, num);
	return (i);
}

int	opt_ab(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	int		i;

	tmp = *stack_a;
	i = opt_rrrr(stack_a, stack_b, tmp);
	while (tmp)
	{
		if (opt_rr(stack_a, stack_b, tmp) < i)
			i = opt_rr(stack_a, stack_b, tmp);
		if (opt_rrrr(stack_a, stack_b, tmp) < i)
			i = opt_rrrr(stack_a, stack_b, tmp);
		if (opt_rarrb(stack_a, stack_b, tmp) < i)
			i = opt_rarrb(stack_a, stack_b, tmp);
		if (opt_rrarb(stack_a, stack_b, tmp) < i)
			i = opt_rrarb(stack_a, stack_b, tmp);
		tmp = tmp->next;
	}
	return (i);
}
