/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_upp_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <edforte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:11:14 by edforte           #+#    #+#             */
/*   Updated: 2024/02/03 13:17:35 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int digcount(unsigned long long int n)
{
	int i;

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

void	ft_put_upp_hex(unsigned long long int num)
{
	char		digits[] = "0123456789ABCDEF";
	char		*str;
	int			i;

	i = digcount(num);
	str = (char *)malloc((i + 1) * sizeof(char));
	if (!str)
		return ;
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
}