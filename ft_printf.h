/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramunoz <ramunoz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 11:00:25 by ramunoz           #+#    #+#             */
/*   Updated: 2025/11/28 11:39:47 by ramunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		handle_conversion(char type, va_list args);
int		print_char(va_list args);
int		print_string(va_list args);
int		print_int(va_list args);
int		print_unsigned(va_list args);
int		print_hex(va_list args, int uppercase);
int		print_pointer(va_list args);

#endif