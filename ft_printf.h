/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:26:24 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/12/03 17:32:36 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>

void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
int		ft_atoi(const char *nptr);
int		ft_printf(const char *str, ...);
int		ptrlen(unsigned long n);
int		hexalen(unsigned int n);
int		nbrlen(long n);
int		unsignednbrlen(unsigned int n);
void	printptr(unsigned long nombre);
void	hexalow(int nombre);
void	hexacap(int nombre);
void	unsft_putnbr_fd(int n, int fd);
int		handlexcap(int nbr);
int		handlex(int nbr);
int		handlec(int nbr);
int		handlepc(void);
int		handleu(int nbr);

#endif