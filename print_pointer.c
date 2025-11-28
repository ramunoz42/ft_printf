/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramunoz <ramunoz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 11:02:05 by ramunoz           #+#    #+#             */
/*   Updated: 2025/11/28 10:59:35 by ramunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex_recursive(unsigned long num, int uppercase);

int	print_pointer(va_list args)
{
	void			*ptr;
	unsigned long	addr;
	int				count;

	ptr = va_arg(args, void *);
	addr = (unsigned long)ptr;
	count = 0;
	write(1, "0x", 2);
	count += 2;
	count += print_hex_recursive(addr, 0);
	return (count);
}
