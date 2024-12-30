/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsft_putnbr_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:26:18 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/12/11 12:00:49 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	unsft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr;
	int				i;

	nbr = n;
	i = 0;
	if (nbr > 9)
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putnbr_fd(nbr % 10, fd);
	}
	else
	{
		ft_putchar_fd(nbr + 48, fd);
	}
}
