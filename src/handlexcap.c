/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlexcap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:04:44 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/12/11 12:00:35 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	handlexcap(int nbr)
{
	int	value;

	value = 0;
	hexacap(nbr);
	return (value += hexalen(nbr));
}
