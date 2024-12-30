/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexalow.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:26:42 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/12/11 12:00:42 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	hexalow(int nombre)
{
	unsigned int	nbr;
	char			*hexacenter;

	hexacenter = "0123456789abcdef";
	nbr = nombre;
	if (nbr > 15)
	{
		hexalow(nbr / 16);
		hexalow(nbr % 16);
	}
	if (nbr < 16)
	{
		ft_putchar_fd(hexacenter[nbr], 1);
	}
}
