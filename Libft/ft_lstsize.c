/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 16:47:26 by pbencze           #+#    #+#             */
/*   Updated: 2024/01/25 13:18:12 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list **lst)
{
	int		i;
	t_list	*trav;

	i = 0;
	if (!lst || !(*lst))
		return (i);
	trav = *lst;
	while (trav)
	{
		trav = trav->next;
		i++;
	}
	return (i);
}
