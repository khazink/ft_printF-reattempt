/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaman <kkaman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 09:58:41 by kkaman            #+#    #+#             */
/*   Updated: 2025/11/22 12:06:27 by kkaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ft_printf-print string of character. 
//print one by one char until i see %.
//check for what specifer and get va_arg the input
//


#include "ft_printf.h"

int	ft_printf(char *format, ...)
{
	va_list	(args);
	int	count;

	count = 0;
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			//go to check specifier
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
		return (print_string(va_arg(args, char*)));
	else if (specifier == 'i' || specifier == 'd')
		return (print_integer(va_arg(args, int)));
	else if (specifier == '%')
		return (print_percent());
	else
		return (0);
}
