/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <edforte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:55:23 by edforte           #+#    #+#             */
/*   Updated: 2024/02/06 17:21:19 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	digcount(unsigned long int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		i ++;
		n /= 16;
	}
	return (i);
}

int	ft_pointer(unsigned long int num, char *digits)
{
	char		*str;
	int			i;
	int			tmp;

	i = digcount(num);
	tmp = i;
	str = (char *)malloc((i + 1) * sizeof(char));
	if (!str)
		return (0);
	str[i--] = '\0';
	if (num == 0)
		str[i] = '0';
	while (num != 0)
	{
		str[i] = digits[num % 16];
		num = num / 16;
		i --;
	}
	i = 0;
	write(1, "0x", 2);
	while (str[i] != '\0')
		write(1, &str[i++], 1);
	free (str);
	return (tmp + 2);
}
