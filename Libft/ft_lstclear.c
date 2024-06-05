/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 13:57:45 by pbencze           #+#    #+#             */
/*   Updated: 2024/01/23 12:57:10 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*post;
	t_list	*current;

	if (lst == NULL)
		return ;
	current = *lst;
	while (current != NULL)
	{
		post = current->next;
		free(current);
		current = post;
	}
	*lst = NULL;
}
