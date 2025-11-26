/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaman <kkaman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 09:58:41 by kkaman            #+#    #+#             */
/*   Updated: 2025/11/26 09:30:56 by kkaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			count += print_handle(*format, args);
		}
		else
		{
			count += write(1, format, 1);
		}
		format++;
	}
	va_end(args);
	return (count);
}

int	print_handle(char specifier, va_list args)
{
	if (specifier == 'c')
		return (print_char(va_arg(args, int)));
	else if (specifier == 's')
		return (print_string(va_arg(args, char *)));
	else if (specifier == 'i' || specifier == 'd')
		return (print_integer(va_arg(args, int)));
	else if (specifier == 'u')
		return (print_unsigned(va_arg(args, unsigned int)));
	else if (specifier == 'x')
		return (print_hex(va_arg(args, unsigned int), 0));
	else if (specifier == 'X')
		return (print_hex(va_arg(args, unsigned int), 1));
	else if (specifier == 'p')
		return (print_pointer(va_arg(args, void *)));
	else if (specifier == '%')
		return (print_percent());
	else
		return (0);
}
