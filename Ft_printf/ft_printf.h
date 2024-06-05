/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:47:09 by pbencze           #+#    #+#             */
/*   Updated: 2023/12/19 17:29:21 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <limits.h>
# include <unistd.h>

int	ft_aux_putchar(int i);
int	ft_aux_puthex(char specifier, unsigned int num);
int	ft_aux_putnbr(int nb);
int	ft_aux_putptr(unsigned long long ptradress);
int	ft_aux_putstr(char *s);
int	ft_aux_putunsigned(unsigned int n);
int	ft_printf(const char *str, ...);

#endif
