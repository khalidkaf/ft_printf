/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:06:59 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/12/11 12:00:33 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	handlex(int nbr)
{
	int	value;

	value = 0;
	hexalow(nbr);
	return (value += hexalen(nbr));
}
