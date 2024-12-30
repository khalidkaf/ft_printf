/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printptr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:26:47 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/12/11 12:00:45 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	printptr(unsigned long nombre)
{
	char	*hexacenter;

	hexacenter = "0123456789abcdef";
	if (nombre > 15)
	{
		printptr(nombre / 16);
		printptr(nombre % 16);
	}
	if (nombre < 16)
	{
		ft_putchar_fd(hexacenter[nombre], 1);
	}
}
