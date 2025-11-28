/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_conv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramunoz <ramunoz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 11:00:04 by ramunoz           #+#    #+#             */
/*   Updated: 2025/11/28 11:14:52 by ramunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_conversion(char type, va_list args)
{
	char	c;

	c = '%';
	if (type == 'c')
		return (print_char(args));
	else if (type == 's')
		return (print_string(args));
	else if (type == 'd' || type == 'i')
		return (print_int(args));
	else if (type == 'u')
		return (print_unsigned(args));
	else if (type == 'x')
		return (print_hex(args, 0));
	else if (type == 'X')
		return (print_hex(args, 1));
	else if (type == 'p')
		return (print_pointer(args));
	else if (type == '%')
	{
		write(1, &c, 1);
		return (1);
	}
	return (0);
}
