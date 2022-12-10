/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdiaz-fe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 10:56:46 by bdiaz-fe          #+#    #+#             */
/*   Updated: 2022/11/26 10:59:36 by bdiaz-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		str = "(null)";
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

int	ft_triage(va_list args, const char alpha)
{
	int	count;

	count = 0;
	if (alpha == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (alpha == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (alpha == 'p')
	{
		count += ft_putstr("0x");
		count += ft_hex_long(va_arg(args, unsigned long), 16);
	}
	else if (alpha == 'd' || alpha == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (alpha == 'u')
		count += ft_unsigned(va_arg(args, unsigned int));
	else if (alpha == 'x' || alpha == 'X')
		count += ft_hex(va_arg(args, unsigned int), 16, alpha);
	else if (alpha == '%')
		count += ft_percent();
	return (count);
}

int	ft_percent(void)
{
	write(1, "%", 1);
	return (1);
}

int	ft_printf(const char *str, ...)
{
	int		longitud;
	int		i;
	va_list	args;

	longitud = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			longitud += ft_triage(args, str[i + 1]);
			i++;
		}
		else
			longitud += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (longitud);
}
