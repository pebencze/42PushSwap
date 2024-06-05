/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 18:25:02 by pbencze           #+#    #+#             */
/*   Updated: 2024/02/01 17:09:20 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	ft_checker(t_list **stack_a, t_list **stack_b, int size)
{
	char	*instruction;

	instruction = get_next_line(0);
	while (instruction)
	{
		if (cmp_instruction(instruction) == 1)
		{
			ft_printf("Error\n");
			free(instruction);
			exit(0);
		}
		do_instruction(instruction, stack_a, stack_b);
		free(instruction);
		instruction = get_next_line(0);
	}
	free(instruction);
	if (sorted(stack_a) && size == ft_lstsize(stack_a))
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	exit(0);
}
