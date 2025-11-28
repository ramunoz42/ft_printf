/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramunoz <ramunoz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 11:01:35 by ramunoz           #+#    #+#             */
/*   Updated: 2025/11/28 10:31:41 by ramunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex_recursive(unsigned long num, int uppercase)
{
	int		count;
	char	*base;
	char	c;

	count = 0;
	if (uppercase)
	{
		base = "0123456789ABCDEF";
	}
	else
	{
		base = "0123456789abcdef";
	}
	if (num >= 16)
	{
		count += print_hex_recursive(num / 16, uppercase);
	}
	c = base[num % 16];
	write(1, &c, 1);
	count++;
	return (count);
}

int	print_hex(va_list args, int uppercase)
{
	unsigned int	n;
	unsigned long	num;
	int				count;

	n = va_arg(args, unsigned int);
	num = n;
	count = 0;
	count += print_hex_recursive(num, uppercase);
	return (count);
}
