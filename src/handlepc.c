/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlepc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:20:09 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/12/11 12:00:29 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	handlepc(void)
{
	ft_putchar_fd('%', 1);
	return (1);
}