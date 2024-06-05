/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atob_btoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 19:50:40 by pbencze           #+#    #+#             */
/*   Updated: 2024/02/01 15:12:59 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	btoa(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	int		i;

	while (ft_lstsize(stack_b))
	{
		tmp = *stack_b;
		i = opt_ba(stack_a, stack_b);
		while (i >= 0)
		{
			if (i == opt_rr_ba(stack_a, stack_b, tmp))
				i = do_rr_ba(stack_a, stack_b, tmp);
			else if (i == opt_rrrr_ba(stack_a, stack_b, tmp))
				i = do_rrrr_ba(stack_a, stack_b, tmp);
			else if (i == opt_rarrb_ba(stack_a, stack_b, tmp))
				i = do_rarrb_ba(stack_a, stack_b, tmp);
			else if (i == opt_rrarb_ba(stack_a, stack_b, tmp))
				i = do_rrarb_ba(stack_a, stack_b, tmp);
			else
				tmp = tmp->next;
		}
	}
}

void	atob(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	int		i;

	while (ft_lstsize(stack_a) > 3 && !sorted(stack_a))
	{
		tmp = *stack_a;
		i = opt_ab(stack_a, stack_b);
		while (i >= 0)
		{
			if (i == opt_rr(stack_a, stack_b, tmp))
				i = do_rr(stack_a, stack_b, tmp);
			else if (i == opt_rrrr(stack_a, stack_b, tmp))
				i = do_rrrr(stack_a, stack_b, tmp);
			else if (i == opt_rarrb(stack_a, stack_b, tmp))
				i = do_rarrb(stack_a, stack_b, tmp);
			else if (i == opt_rrarb(stack_a, stack_b, tmp))
				i = do_rrarb(stack_a, stack_b, tmp);
			else
				tmp = tmp->next;
		}
	}
	if (ft_lstsize(stack_a) == 3)
		sort_three(stack_a);
	btoa(stack_a, stack_b);
	rotate_back(stack_a);
}
