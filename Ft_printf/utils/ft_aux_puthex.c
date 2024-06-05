/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux_puthex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:57:42 by pbencze           #+#    #+#             */
/*   Updated: 2023/12/19 16:07:38 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_aux_puthex(char specifier, unsigned int num)
{
	char					*base;
	int						i;

	i = 0;
	if (specifier == 'x')
		base = "0123456789abcdef";
	if (specifier == 'X')
		base = "0123456789ABCDEF";
	if (num > 15)
	{
		i += ft_aux_puthex(specifier, num / 16);
		i += ft_aux_puthex(specifier, num % 16);
	}
	else
		i += write(1, &(base[num]), 1);
	return (i);
}
