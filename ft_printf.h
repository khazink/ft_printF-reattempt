/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaman <kkaman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 16:19:22 by kkaman            #+#    #+#             */
/*   Updated: 2025/11/22 12:06:25 by kkaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include "stdlib.h"
#include "stdarg.h"
#include "unistd.h"

int		ft_printf(char *format, ...);
int		print_handle(char specifier, va_list args);
int		print_char(char c);
int		print_string(char *s);
int		print_integer(int d);
int		print_percent(void);
#endif
