/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 22:09:28 by tehuanmelo        #+#    #+#             */
/*   Updated: 2022/08/07 21:00:16 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// int check_flag(const char fmt, va_list ap)
// {
// 	int print_len;

// 	print_len = 0;
// 	if (fmt == 'c')
// 		print_len += ft_putchar(va_arg(ap, int));
// 	else if (fmt == 's')
// 		print_len += ft_putstr(va_arg(ap, char *));
// 	else if (fmt == 'i' || fmt == 'd')
// 		print_len += ft_putnbr(va_arg(ap, int));
// 	else if (fmt == 'u')
// 		print_len += ft_putnbr(va_arg(ap, unsigned int));
// 	else if (fmt == 'x' || fmt == 'X')
// 		print_len += ft_puthex(va_arg(ap, unsigned int), fmt);
// 	else if (fmt == 'p')
// 	{
// 		print_len += ft_putstr("0x");
// 		print_len += ft_puthex(va_arg(ap, unsigned long int), fmt);
// 	}
// 	return (print_len);
// }

int ft_printf(const char *fmt, ...)
{
	va_list ap;
	va_start(ap, fmt);
	int print_len;

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
			else if (*fmt == 'x' || *fmt == 'X')
				print_len += ft_puthex(va_arg(ap, unsigned int), *fmt);
			else if (*fmt == 'p')
			{
				print_len += ft_putstr("0x");
				print_len += ft_puthex(va_arg(ap, unsigned long int), *fmt);
			}
			// print_len += check_flag(*fmt, ap);
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
//     // int a = 123;
//     // int *ptr = &a;
//     int i = ft_printf("%c %c %c\n", 0, '0', '1');
//     int j = printf("%c %c %c\n", 0, '0', '1');
//     printf("%i\n", i);
//     printf("%i", j);
// }
