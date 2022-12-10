/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdiaz-fe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 10:54:57 by bdiaz-fe          #+#    #+#             */
/*   Updated: 2022/11/26 10:57:44 by bdiaz-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_hex(unsigned int nb, int base, const char alpha)
{
	int		i;
	char	*base_set;
	int		count;

	if (alpha == 'x')
		base_set = "0123456789abcdef";
	else
		base_set = "0123456789ABCDEF";
	i = nb % base;
	count = 0;
	if (nb / base > 0)
		count += ft_hex(nb / base, base, alpha);
	count += ft_putchar(base_set[i]);
	return (count);
}

int	ft_hex_long(unsigned long nb, int base)
{
	unsigned long	i;
	char			*base_set;
	int				count;

	base_set = "0123456789abcdef";
	i = nb % base;
	count = 0;
	if (nb / base > 0)
		count += ft_hex_long(nb / base, base);
	count += ft_putchar(base_set[i]);
	return (count);
}

int	ft_unsigned(unsigned int n)
{
	int	count;

	count = 0;
	if (n < 10)
		count += ft_putchar(n + 48);
	else
	{
		count += ft_unsigned(n / 10);
		count += ft_unsigned(n % 10);
	}
	return (count);
}

int	ft_putnbr(int n)
{
	long long	num;
	char		c;
	int			count;

	count = 0;
	num = n;
	if (num < 0)
	{
		count += ft_putchar('-');
		num *= -1;
	}
	if (num >= 10)
		count += ft_putnbr(num / 10);
	c = '0' + (num % 10);
	count += ft_putchar(c);
	return (count);
}
