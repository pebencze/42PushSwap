/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:28:44 by pbencze           #+#    #+#             */
/*   Updated: 2024/02/01 16:24:38 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

char	**ft_freewords(char **str, int i)
{
	while (i--)
		free(str[i]);
	free(str);
	return (NULL);
}

int	free_args(char **args)
{
	int	i;

	i = 0;
	while (args[i])
	{
		free(args[i]);
		i++;
	}
	free(args);
	return (0);
}

char	**make_args(char **av, int ac)
{
	char	**args;
	int		i;

	i = 0;
	args = (char **)malloc(ac * sizeof(char *));
	if (!args)
		return (0);
	args[ac - 1] = NULL;
	while (i < ac - 1)
	{
		args[i] = ft_strdup(av[i + 1]);
		if (!args[i])
			return (ft_freewords(args, i));
		i++;
	}
	return (args);
}

int	main(int ac, char **av)
{
	char	**args;
	t_list	**stack_a;
	t_list	**stack_b;

	if (ac < 2)
		return (0);
	if (ac == 2)
		args = ft_split(av[1], ' ');
	if (ac > 2)
		args = make_args(av, ac);
	if ((check_args(args) == 1))
		return (free_args(args));
	stack_a = (t_list **)malloc(sizeof(t_list));
	stack_b = (t_list **)malloc(sizeof(t_list));
	if (!stack_a || !stack_b)
	{
		free_stacks(stack_a, stack_b);
		return (0);
	}
	*stack_b = NULL;
	*stack_a = stack_init(args);
	if (*stack_a)
		ft_checker(stack_a, stack_b, ft_lstsize(stack_a));
	free_stacks(stack_a, stack_b);
	return (0);
}
