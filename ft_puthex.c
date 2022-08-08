/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 13:49:11 by tehuanmelo        #+#    #+#             */
/*   Updated: 2022/08/07 20:41:10 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long n, char x)
{
	int		counter;
	char	*str;

	str = "0123456789abcdef";
	counter = 0;
	if (x == 'X')
		str = "0123456789ABCDEF";
	if (n > 15)
	{
		counter += ft_puthex(n / 16, x);
		counter += ft_puthex(n % 16, x);
	}
	else
		counter += ft_putchar(str[n]);
	return (counter);
}
