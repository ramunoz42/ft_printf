/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramunoz <ramunoz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 11:01:52 by ramunoz           #+#    #+#             */
/*   Updated: 2025/11/28 10:59:58 by ramunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_int_recursive(long num);

int	print_unsigned(va_list args)
{
	unsigned int	n;
	long			num;
	int				count;

	n = va_arg(args, unsigned int);
	num = n;
	count = 0;
	count += print_int_recursive(num);
	return (count);
}
