/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 18:19:26 by pbencze           #+#    #+#             */
/*   Updated: 2024/01/31 18:23:21 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

static int	ft_check_digits(char **args)
{
	int	i;
	int	j;

	i = 0;
	while (args[i])
	{
		j = 0;
		if ((args[i][j] == '-' || args[i][j] == '+') && args[i][j + 1])
			j++;
		while (args[i][j])
		{
			if (!ft_isdigit(args[i][j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

static int	ft_check_doubles(char **args)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (args[i])
	{
		tmp = (int)ft_atoi(args[i]);
		j = i + 1;
		while (args[j])
		{
			if ((int)ft_atoi(args[j]) == tmp)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

static int	ft_check_size(char **args)
{
	int	i;
	int	j;

	i = 0;
	while (args[i])
	{
		j = 0;
		if (args[i][j] == '-' || args[i][j] == '+')
			j++;
		while (args[i][j] == 0)
			j++;
		if (args[i][j] && ft_strlen(&args[i][j]) > 10)
			return (1);
		if (ft_atoi(args[i]) > INT_MAX || ft_atoi(args[i]) < INT_MIN)
			return (1);
		i++;
	}
	return (0);
}

int	check_args(char **args)
{
	if (!args)
	{
		ft_printf("Error\n");
		return (1);
	}
	if (ft_check_digits(args) == 1)
	{
		ft_printf("Error\n");
		return (1);
	}
	if (ft_check_size(args) == 1)
	{
		ft_printf("Error\n");
		return (1);
	}
	if (ft_check_doubles(args) == 1)
	{
		ft_printf("Error\n");
		return (1);
	}
	return (0);
}
