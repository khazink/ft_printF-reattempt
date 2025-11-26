/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaman <kkaman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 17:03:07 by kkaman            #+#    #+#             */
/*   Updated: 2025/11/26 09:16:52 by kkaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned long hex, int uppercase)
{
	int		count;
	char	*base;

	count = 0;
	if (uppercase)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (hex >= 16)
		count += print_hex(hex / 16, uppercase);
	count += write (1, &base[hex % 16], 1);
	return (count);
}

int	print_pointer(void *ptr)
{
	int				count;
	unsigned long	addr;

	count = 0;
	if (!ptr)
		return (write(1, "(nil)", 5));
	addr = (unsigned long)ptr;
	count += write(1, "0x", 2);
	count += print_hex(addr, 0);
	return (count);
}
