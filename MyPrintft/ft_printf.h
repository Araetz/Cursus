/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdiaz-fe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 10:57:04 by bdiaz-fe          #+#    #+#             */
/*   Updated: 2022/11/26 10:57:57 by bdiaz-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_printf(const char *str, ...);
int	ft_percent(void);
int	ft_hex(unsigned int nb, int base, const char alpha);
int	ft_hex_long(unsigned long nb, int base);
int	ft_unsigned(unsigned int n);
int	ft_putnbr(int n);

#endif
