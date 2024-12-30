/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handleu.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:28:28 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/12/11 12:00:31 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	handleu(int nbr)
{
	int	value;

	value = 0;
	unsft_putnbr_fd(nbr, 1);
	return (value += unsignednbrlen(nbr));
}
