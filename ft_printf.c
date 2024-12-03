/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:26:35 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/12/03 11:33:00 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// int	printstr(va_list ap, int value)
// {
// 	char	*str;

// 	str = va_arg(ap, char *);
// 	if (!str)
// 	{
// 		write(1, "(null)", 6);
// 		value += 6;
// 	}
// 	while (*str)
// 	{
// 		ft_putchar_fd(str[0], 1);
// 		str++;
// 		value++;
// 	}
// 	return (value);
// }
// int	handleu(va_list ap, int value)
// {
// 	unsigned long	nbr;

// 	nbr = va_arg(ap, int);
// 	unsft_putnbr_fd(nbr, 1);
// 	return value + unsignednbrlen(nbr);
// }

int	ft_printf(const char *str, ...)
{
	int				value;
	int				i;
	unsigned long	ptr;
	va_list			ap;
	long			nbr;
	char			*string;

	value = 0;
	i = 0;
	va_start(ap, str);
	while (*str)
	{
		if (str[0] != '%')
		{
			write(1, str, 1);
			str++;
			value++;
			continue ;
		}
		else
		{
			str++;
			if (str[0] == 'i' || str[0] == 'd')
			{
				nbr = va_arg(ap, int);
				ft_putnbr_fd(nbr, 1);
				value += nbrlen(nbr);
			}
			else if (str[0] == 'c')
			{
				ft_putchar_fd(va_arg(ap, int), 1);
				value++;
			}
			else if (str[0] == 's')
			{
				string = va_arg(ap, char *);
				if (!string)
				{
					write(1, "(null)", 6);
					value += 6;
				}
				else
				{
					while (*string)
					{
						ft_putchar_fd(string[0], 1);
						string++;
						value++;
					}
				}
			}
			else if (str[0] == 'u')
				{
					nbr = va_arg(ap, int);
					unsft_putnbr_fd(nbr, 1);
					value += unsignednbrlen(nbr);
				}
			else if (str[0] == '%')
			{
				ft_putchar_fd('%', 1);
				value++;
			}
			else if (str[0] == 'x')
			{
				nbr = va_arg(ap, int);
				hexalow(nbr);
				value += hexalen(nbr);
			}
			else if (str[0] == 'X')
			{
				nbr = va_arg(ap, int);
				hexacap(nbr);
				value += hexalen(nbr);
			}
			else if (str[0] == 'p')
			{
				ptr = (va_arg(ap, unsigned long));
				if (ptr == 0)
				{
					write(1, "(nil)", 5);
					value += 5;
				}
				else
				{
					value += write(1, "0", 1);
					value += write(1, "x", 1);
					value += ptrlen(ptr);
					printptr(ptr);
				}
			}
			str++;
		}
	}
	va_end(ap);
	return (value);
}

// #include <limits.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	int		un;
// 	float	deux;
// 	char	*trois;
// 	char	quatre;
// 	int		cinq;
// 	void	*c;
// 	int		county;
// 	int		count;

// 	un = 1;
// 	deux = 0.2;
// 	trois = "trois";
// 	quatre = 'q';
// 	cinq = -6;ls
// 	c = malloc(3);
// 	// printf("%s", average("kafmaghni", 'k', 'h', 'a', 'l', 'i', 'd'));
// 	// printouf("khalid%i %c %s kafmaghni %u %x %X %p \n", un, quatre,
// 	// trois,
// 	// -10,
// 	// 	-1245, 57419, trois);
// 	county = ft_printf(" %p ", 15);
// 	printf("\n");
// 	ft_printf("=====%d===== \n", county);
// 	printf("\n");
// 	count = printf(" %p ", 15);
// 	printf("\n");
// 	printf("=====%d===== \n", count);
// 	printf("\n");
// 	// printf("khalid%i %c %s kafmaghni %u %x %X %p \n", un, quatre, trois,
// 	// -10,
// 	// 	-1245, 57419, trois);
// 	free(c);
// }

// /*int main(void)
// {
// 	char	*str = malloc(sizeof(char) * 5);
// 	ft_printf("%p", str);
// 	printf("%p", str);
// 	return (0);
// }*/

// // // 0x8000000000000000
// // // 0x7fffffffffffffff