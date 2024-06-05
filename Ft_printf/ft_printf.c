/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:47:04 by pbencze           #+#    #+#             */
/*   Updated: 2023/12/19 17:29:13 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(int counter, va_list args, const char *str)
{
	if (*str == 'c')
		counter += ft_aux_putchar(va_arg(args, int));
	if (*str == 's')
		counter += ft_aux_putstr(va_arg(args, char *));
	if (*str == 'p')
		counter += ft_aux_putptr(va_arg(args, unsigned long long));
	if (*str == 'i' || *str == 'd')
		counter += ft_aux_putnbr(va_arg(args, int));
	if (*str == 'u')
		counter += ft_aux_putunsigned(va_arg(args, unsigned int));
	if (*str == 'x' || *str == 'X')
		counter += ft_aux_puthex(*str, va_arg(args, unsigned int));
	if (*str == '%')
		counter += ft_aux_putchar('%');
	return (counter);
}

int	ft_printf(const char *str, ...)
{
	int		counter;
	va_list	args;

	va_start(args, str);
	counter = 0;
	if (!str)
		return (-1);
	while (*str)
	{
		if (*str != '%')
			counter += ft_aux_putchar(*str);
		else if (*str == '%' && ++str)
		{
			counter = ft_format(counter, args, str);
		}
		str++;
	}
	va_end(args);
	return (counter);
}
