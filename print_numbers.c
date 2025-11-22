/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaman <kkaman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 11:25:17 by kkaman            #+#    #+#             */
/*   Updated: 2025/11/22 12:19:47 by kkaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_integer(int d)
{
	int		count;
	char	num;

	count = 0;
	if (d < 0)
	{
		d = -d;
		count += write (1, "-", 1);
	}
	if (d >= 10)
	{
		count += print_integer(d / 10);
	}
	num = (d % 10) + '0';
	count += write (1, &num, 1);
	return (count);
}
