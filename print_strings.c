/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_strings.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaman <kkaman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 17:53:09 by kkaman            #+#    #+#             */
/*   Updated: 2025/11/22 11:24:53 by kkaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(char c)
{
	write (1, &c, 1);
	return (1);
}

int	print_string(char *s)
{
	int	count;

	count = 0;
	if (!s)
		s = "(null)";
	while (*s)
	{
		count += write(1, s, 1);
		s++;
	}
	return (count);
}

int	print_percent(void)
{
	write (1, "%", 1);
	return (1);
}
