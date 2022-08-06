/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 22:53:02 by tehuanmelo        #+#    #+#             */
/*   Updated: 2022/08/05 23:12:08 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int counter;

	counter = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while (*str)
		counter += ft_putchar(*str++);
	return (counter);
}