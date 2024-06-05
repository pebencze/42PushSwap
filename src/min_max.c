/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 19:50:40 by pbencze           #+#    #+#             */
/*   Updated: 2024/01/26 20:58:10 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_max(t_list **stack)
{
	t_list	*max_node;
	t_list	*tmp;

	max_node = *stack;
	tmp = *stack;
	while (tmp)
	{
		if (tmp->content > max_node->content)
			max_node = tmp;
		tmp = tmp->next;
	}
	return (max_node->content);
}

int	ft_min(t_list **stack)
{
	t_list	*min_node;
	t_list	*tmp;

	min_node = *stack;
	tmp = *stack;
	while (tmp)
	{
		if (tmp->content < min_node->content)
			min_node = tmp;
		tmp = tmp->next;
	}
	return (min_node->content);
}
