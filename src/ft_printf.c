/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkafmagh <kkafmagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:26:35 by kkafmagh          #+#    #+#             */
/*   Updated: 2024/12/22 23:04:41 by kkafmagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	handles(char *str)
{
	int	value;

	value = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		value += 6;
	}
	else
	{
		while (*str)
		{
			ft_putchar_fd(str[0], 1);
			str++;
			value++;
		}
	}
	return (value);
}

int	handlep(unsigned long ptr)
{
	int	value;

	value = 0;
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
	return (value);
}

int	handleid(long nbr)
{
	int	value;

	value = 0;
	ft_putnbr_fd(nbr, 1);
	return (value += nbrlen(nbr));
}

int	handleint(va_list ap, char c)
{
	int	value;

	value = 0;
	if (c == 'x')
		value += handlex(va_arg(ap, int));
	else if (c == 'X')
		value += handlexcap(va_arg(ap, int));
	else if (c == 'i' || c == 'd')
		value += handleid(va_arg(ap, int));
	else if (c == 'c')
		value += handlec(va_arg(ap, int));
	else if (c == 'u')
		value += handleu(va_arg(ap, int));
	else if (c == 's')
		value = value + handles(va_arg(ap, char *));
	else if (c == '%')
		value += handlepc();
	else if (c == 'p')
		value += handlep(va_arg(ap, unsigned long));
	return (value);
}

int	ft_printf(const char *str, ...)
{
	int		value;
	va_list	ap;

	value = 0;
	if (!str)
		return (-1);
	va_start(ap, str);
	while (*str)
	{
		if (str[0] == '%')
		{
			str++;
			value += handleint(ap, str[0]);
		}
		else
		{
			write(1, str, 1);
			value++;
		}
		str++;
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
// 	cinq = -6;
// 	c = malloc(3);
// 	// printf("%s", average("kafmaghni", 'k', 'h', 'a', 'l', 'i', 'd'));
// 	// printouf("khalid%i %c %s kafmaghni %u %x %X %p \n", un, quatre,
// 	// trois,
// 	// -10,
// 	// 	-1245, 57419, trois);
// 	county = ft_printf(" %d ", ft_printf(0));
// 	printf("\n");
// 	ft_printf("=====%d===== \n", county);
// 	printf("\n");
// 	count = printf(" %i ", printf(0));
// 	printf("\n");
// 	printf("=====%d===== \n", count);
// 	printf("\n");
// 	// printf("khalid%i %c %s kafmaghni %u %x %X %p \n", un, quatre, trois,
// 	// -10,
// 	// 	-1245, 57419, trois);
// 	free(c);
// }
// int main(void)
// {
// 	char	*str = NULL;
// 	ft_printf("%p\n", str);
// 	printf("%p", str);
// 	return (0);
// }
