/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_rotate_option_ba.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 20:34:43 by pbencze           #+#    #+#             */
/*   Updated: 2024/02/01 15:13:16 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	opt_rr_ba(t_list **stack_a, t_list **stack_b, t_list *node)
{
	int	num;
	int	i;

	num = node->content;
	i = future_index_a(stack_a, num);
	if (i < find_index(stack_b, num))
		i = find_index(stack_b, num);
	return (i);
}

int	opt_rrrr_ba(t_list **stack_a, t_list **stack_b, t_list *node)
{
	int	num;
	int	i;

	num = node->content;
	i = 0;
	if (future_index_a(stack_a, num))
		i = ft_lstsize(stack_a) - future_index_a(stack_a, num);
	if (find_index(stack_b, num))
	{
		if (i < (ft_lstsize(stack_b) - find_index(stack_b, num)))
			i = ft_lstsize(stack_b) - find_index(stack_b, num);
	}
	return (i);
}

int	opt_rrarb_ba(t_list **stack_a, t_list **stack_b, t_list *node)
{
	int	num;
	int	i;

	num = node->content;
	i = 0;
	if (find_index(stack_b, num))
		i = ft_lstsize(stack_b) - find_index(stack_b, num);
	i += future_index_a(stack_a, num);
	return (i);
}

int	opt_rarrb_ba(t_list **stack_a, t_list **stack_b, t_list *node)
{
	int	num;
	int	i;

	num = node->content;
	i = 0;
	if (future_index_a(stack_a, num))
		i = ft_lstsize(stack_a) - future_index_a(stack_a, num);
	i += find_index(stack_b, num);
	return (i);
}

int	opt_ba(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	int		i;

	tmp = *stack_b;
	i = opt_rrrr_ba(stack_a, stack_b, tmp);
	while (tmp)
	{
		if (opt_rr_ba(stack_a, stack_b, tmp) < i)
			i = opt_rr_ba(stack_a, stack_b, tmp);
		if (opt_rrrr_ba(stack_a, stack_b, tmp) < i)
			i = opt_rrrr_ba(stack_a, stack_b, tmp);
		if (opt_rarrb_ba(stack_a, stack_b, tmp) < i)
			i = opt_rarrb_ba(stack_a, stack_b, tmp);
		if (opt_rrarb_ba(stack_a, stack_b, tmp) < i)
			i = opt_rrarb_ba(stack_a, stack_b, tmp);
		tmp = tmp->next;
	}
	return (i);
}
