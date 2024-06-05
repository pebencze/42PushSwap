/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 16:03:15 by pbencze           #+#    #+#             */
/*   Updated: 2024/01/31 12:17:23 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL)
		return ;
	if (lst)
	{
		if (*lst)
		{
			new->next = *lst;
			(*lst)->previous = new;
			*lst = new;
			(*lst)->previous = NULL;
		}
		else
		{
			new->next = NULL;
			new->previous = NULL;
			*lst = new;
		}
	}
}
