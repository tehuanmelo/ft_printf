/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 23:13:37 by tehuanmelo        #+#    #+#             */
/*   Updated: 2022/08/05 23:37:55 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long n)
{
	int counter;

	counter = 0;
	if (n > 9)
	{
		counter += ft_putnbr(n / 10);
		counter += ft_putnbr(n % 10);
	}
	else if (n < 0)
	{
		counter += ft_putchar('-');
		counter += ft_putnbr(n *= -1);
	}
	else
		counter += ft_putchar(n + 48);
	return (counter);
}