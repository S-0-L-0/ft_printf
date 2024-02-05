/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <edforte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:20:51 by edforte           #+#    #+#             */
/*   Updated: 2024/02/05 20:18:14 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	print_arguments(char type, va_list argp)
{
	int	i;

	i = 0;
	//printf("ciao");
	if (type == '%')
		i += ft_putchar('%');
	else if (type == 'c')
		i += ft_putchar(va_arg(argp, int));
	else if (type == 'd' || type == 'i')
		i += ft_putnbr(va_arg(argp, int));

	//printf("%d", i);
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list	argp;
	int		i;

	//printf("ciao\n");
	i = 0;
	va_start(argp, format);
	while (*format)
	{
		if (*format == '%')
		{
			format ++;
			i += print_arguments(*format, argp);
		}
		format ++;
	}
	return (i);
}
int main()
{
	int	x = 36;
	//printf("%d",x);
	ft_printf("%d\n", x);
	return (0);
}