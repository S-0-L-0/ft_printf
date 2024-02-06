/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_uns_nbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <edforte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:15:20 by edforte           #+#    #+#             */
/*   Updated: 2024/02/06 17:05:00 by edforte          ###   ########.fr       */
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
		n /= 10;
	}
	return (i);
}

int	ft_put_uns_nbr(unsigned int nb)
{
	if (nb > 9)
	{
		ft_put_uns_nbr(nb / 10);
		ft_put_uns_nbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
	return (digcount(nb));
}
