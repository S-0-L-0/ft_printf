/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <edforte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:18:10 by edforte           #+#    #+#             */
/*   Updated: 2024/02/03 13:18:49 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

int ft_printf(const char *, ...);
void	ft_putstr(char *str);
void	ft_putchar(char num);
void	ft_put_low_hex(unsigned long long int num);
void	ft_put_upp_hex(unsigned long long int num);
void	ft_putchar(char c);
void	ft_put_uns_nbr(unsigned int nb);

#endif