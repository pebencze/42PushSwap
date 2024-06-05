/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:19:44 by pbencze           #+#    #+#             */
/*   Updated: 2024/01/31 16:43:01 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	min_index(t_list **stack_a)
{
	int		i;
	int		counter;
	t_list	*tmp;
	t_list	*ref;

	i = 1;
	counter = 1;
	tmp = *stack_a;
	ref = tmp;
	while (tmp)
	{
		if (tmp->content < ref->content)
		{
			i = counter;
			ref = tmp;
		}
		counter++;
		tmp = tmp->next;
	}
	return (i);
}

int	find_index(t_list **stack, int num)
{
	int		index;
	t_list	*tmp;

	index = 0;
	tmp = *stack;
	while (tmp->content != num)
	{
		index++;
		tmp = tmp->next;
	}
	return (index);
}

int	future_index_b(t_list **stack_b, int num)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = *stack_b;
	if (num > tmp->content && num < ft_lstlast(tmp)->content)
		return (i);
	else if (num > ft_max(stack_b) || num < ft_min(stack_b))
		i = find_index(stack_b, ft_max(stack_b));
	else
	{
		i = ft_lstsize(stack_b);
		while (tmp->next)
		{
			if (num < tmp->content && num > tmp->next->content)
				i = find_index(stack_b, tmp->content) + 1;
			tmp = tmp->next;
		}
	}
	return (i);
}

int	future_index_a(t_list **stack_a, int num)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = *stack_a;
	if (num < tmp->content && num > ft_lstlast(tmp)->content)
		return (i);
	else if (num > ft_max(stack_a) || num < ft_min(stack_a))
		i = find_index(stack_a, ft_min(stack_a));
	else
	{
		i = ft_lstsize(stack_a);
		while (tmp->next)
		{
			if (num > tmp->content && num < tmp->next->content)
				i = find_index(stack_a, tmp->content) + 1;
			tmp = tmp->next;
		}
	}
	return (i);
}
