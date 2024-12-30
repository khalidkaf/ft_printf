/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:03:19 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/12/11 12:00:25 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;
	int		i;

	nbr = n;
	i = 0;
	if (n < 0)
	{
		write(fd, "-", 1);
		nbr = nbr * -1;
	}
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

// int	main(void)
// {
// 	ft_putnbr_fd(0, 1);
// 	// putnbr(6);
// }