/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 22:09:28 by tehuanmelo        #+#    #+#             */
/*   Updated: 2022/08/06 15:30:44 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	int		print_len;

	va_start(ap, fmt);
	print_len = 0;
	while (*fmt)
	{
		if (*fmt == '%' && (*(fmt + 1)) == '%')
		{
			print_len += ft_putchar('%');
			fmt++;
		}
		else if (*fmt == '%')
		{
			fmt++;
			if (*fmt == 'c')
				print_len += ft_putchar(va_arg(ap, int));
			else if (*fmt == 's')
				print_len += ft_putstr(va_arg(ap, char *));
			else if (*fmt == 'i' || *fmt == 'd')
				print_len += ft_putnbr(va_arg(ap, int));
			else if (*fmt == 'u')
				print_len += ft_putnbr(va_arg(ap, unsigned int));
			else if (*fmt == 'x')
				print_len += ft_putlox(va_arg(ap, unsigned int));
			else if (*fmt == 'X')
				print_len += ft_putupx(va_arg(ap, unsigned int));
			else if (*fmt == 'p')
			{
				print_len += ft_putstr("0x");
				print_len += ft_putlox(va_arg(ap, unsigned long int));
			}
		}
		else
			print_len += ft_putchar(*fmt);
		fmt++;
	}
	va_end(ap);
	return (print_len);
}

// int main()
// {
//     int a = 123;
//     int *ptr = &a;
//     int i = ft_printf("%p %p\n", &a, ptr);
//     int j = printf("%p %p\n", &a, ptr);
//     printf("%i\n", i);
//     printf("%i", j);
// }
