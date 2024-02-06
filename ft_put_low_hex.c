/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_low_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <edforte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:16:30 by edforte           #+#    #+#             */
/*   Updated: 2024/02/06 17:18:11 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	digcount(unsigned int n)
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

int	ft_put_low_hex(unsigned int num, char *digits)
{
	char		*str;
	int			i;

	i = digcount(num);
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
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i ++;
	}
	free (str);
	return (i);
}
