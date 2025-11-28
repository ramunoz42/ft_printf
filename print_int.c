/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramunoz <ramunoz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 11:01:23 by ramunoz           #+#    #+#             */
/*   Updated: 2025/11/28 10:59:49 by ramunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_int_recursive(long num)
{
	int		count;
	char	c;

	count = 0;
	if (num >= 10)
	{
		count += print_int_recursive(num / 10);
	}
	c = (num % 10) + '0';
	write(1, &c, 1);
	count++;
	return (count);
}

int	print_int(va_list args)
{
	int		n;
	long	num;
	int		count;

	n = va_arg(args, int);
	num = n;
	count = 0;
	if (num < 0)
	{
		write(1, "-", 1);
		count++;
		num = -num;
	}
	count += print_int_recursive(num);
	return (count);
}
