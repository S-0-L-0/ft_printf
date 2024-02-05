/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_uns_nbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <edforte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:15:20 by edforte           #+#    #+#             */
/*   Updated: 2024/02/05 19:23:00 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_put_uns_nbr(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb > 9)
	{
		ft_put_uns_nbr(nb / 10);
		ft_put_uns_nbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
		i ++;
	}
	return (i);
}
