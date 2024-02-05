/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <edforte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:18:10 by edforte           #+#    #+#             */
/*   Updated: 2024/02/05 20:05:31 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_putstr(char *str);
int	ft_putchar(char num);
int	ft_put_low_hex(unsigned long long int num);
int	ft_put_upp_hex(unsigned long long int num);
int	ft_putchar(char c);
int	ft_put_uns_nbr(unsigned int nb);
int	ft_putnbr(int nb);

#endif