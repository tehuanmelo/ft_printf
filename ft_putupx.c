/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putupx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 13:49:11 by tehuanmelo        #+#    #+#             */
/*   Updated: 2022/08/06 14:24:15 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putupx(unsigned long n)
{
	int		counter;
	char	*str;

	str = "0123456789ABCDEF";
	counter = 0;
	if (n > 15)
	{
		counter += ft_putupx(n / 16);
		counter += ft_putupx(n % 16);
	}
	else
		counter += ft_putchar(str[n]);
	return (counter);
}
