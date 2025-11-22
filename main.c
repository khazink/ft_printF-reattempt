/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaman <kkaman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 16:31:49 by kkaman            #+#    #+#             */
/*   Updated: 2025/11/22 12:23:18 by kkaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	count;
	int	count2;

	count = ft_printf("This is a test. %i \n", 2147483647);
	count2 = printf("This is a test. %i \n", 2147483647);
	printf("count ft_printf = %d \n", count);
	printf("count printf = %d", count2);
	return (0);
}
