/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_uns_nbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <edforte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:15:20 by edforte           #+#    #+#             */
/*   Updated: 2024/02/03 13:18:31 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_put_uns_nbr(unsigned int nb)
{
    if (nb > 9)
	{
		ft_put_uns_nbr(nb / 10);
		ft_put_uns_nbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}