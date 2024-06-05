/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux_putptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:57:42 by pbencze           #+#    #+#             */
/*   Updated: 2023/12/19 17:28:51 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_aux_putadress(char specifier, unsigned long long num)
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
		i += ft_aux_putadress(specifier, num / 16);
		i += ft_aux_putadress(specifier, num % 16);
	}
	else
		i += write(1, &(base[num]), 1);
	return (i);
}

int	ft_aux_putptr(unsigned long long ptradress)
{
	int	i;

	if (!ptradress)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	i = 2;
	i += ft_aux_putadress('x', ptradress);
	return (i);
}
