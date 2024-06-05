/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:30:30 by pbencze           #+#    #+#             */
/*   Updated: 2024/01/25 12:32:16 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*stack_init(char **args)
{
	t_list	*head;
	t_list	*node;
	int		i;

	i = 0;
	head = NULL;
	while (args[i])
	{
		node = ft_lstnew((int)(ft_atoi(args[i])));
		if (!node)
		{
			ft_lstclear(&head);
			break ;
		}
		ft_lstadd_back(&head, node);
		i++;
	}
	free_args(args);
	return (head);
}
