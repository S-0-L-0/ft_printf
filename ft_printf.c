/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <edforte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:20:51 by edforte           #+#    #+#             */
/*   Updated: 2024/02/06 17:03:40 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_arguments(char type, va_list argp)
{
	int	i;

	i = 0;
	if (type == '%')
		return (ft_putchar('%'));
	else if (type == 'c')
		return (ft_putchar(va_arg(argp, int)));
	else if (type == 's')
		return (ft_putstr(va_arg(argp, char *)));
	else if (type == 'p')
		return (ft_pointer(va_arg(argp, unsigned long), "0123456789abcdef"));
	else if (type == 'd' || type == 'i')
		return (ft_putnbr(va_arg(argp, int)));
	else if (type == 'u')
		return (ft_put_uns_nbr(va_arg(argp, unsigned int)));
	else if (type == 'x')
		return (ft_put_low_hex(va_arg(argp, unsigned int), "0123456789abcdef"));
	else if (type == 'X')
		return (ft_put_upp_hex(va_arg(argp, unsigned int), "0123456789ABCDEF"));
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list	argp;
	int		i;

	i = 0;
	va_start(argp, format);
	while (*format)
	{
		if (*format == '%')
		{
			format ++;
			i += print_arguments(*format, argp);
		}
		else
			i += ft_putchar(*format);
		format ++;
	}
	va_end(argp);
	return (i);
}

// int	main(void)
// {
// 	int	x;
// 	int	y;
// 	int	z;

// 	x = 420;
// 	y = printf("ciao come va %d\n", x);
// 	z = ft_printf("ciao come va %d\n", x);
// 	printf("ciao come va %d\n", x);
// 	ft_printf("ciao come va %d\n", x);
// 	printf("questa e'y %d\n", y);
// 	printf("questa e'z %d\n", z);
// 	return (0);
// }
