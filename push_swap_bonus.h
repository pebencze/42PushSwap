/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:28:40 by pbencze           #+#    #+#             */
/*   Updated: 2024/02/01 16:43:18 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "Ft_printf/ft_printf.h"
# include "Libft/libft.h"
# include "gnl/get_next_line.h"

int		check_args(char **args);
int		free_args(char **args);
t_list	*stack_init(char **args);
void	free_stacks(t_list **stack_a, t_list **stack_b);
int		ft_push(t_list **stack_from, t_list **stack_to);
int		pb(t_list **stack_a, t_list **stack_b);
int		pa(t_list **stack_b, t_list **stack_a);
int		ft_swap(t_list **stack);
int		sa(t_list **stack_a);
int		sb(t_list **stack_b);
int		ss(t_list	**stack_a, t_list **stack_b);
int		ft_rotate(t_list **stack);
int		ra(t_list **stack_a);
int		rb(t_list **stack_b);
int		rr(t_list	**stack_a, t_list **stack_b);
int		ft_reverse_rotate(t_list **stack);
int		rra(t_list **stack_a);
int		rrb(t_list **stack_b);
int		rrr(t_list **stack_a, t_list **stack_b);
int		sorted(t_list **stack);
int		cmp_instruction(char *in);
int		do_instruction(char *in, t_list **stack_a, t_list **stack_b);
int		ft_strcmp(char *s1, char *s2);
char	*get_next_line(int fd);
void	ft_checker(t_list **stack_a, t_list **stack_b, int size);

#endif
