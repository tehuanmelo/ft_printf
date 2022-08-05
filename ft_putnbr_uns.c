/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_uns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:21:02 by tde-melo          #+#    #+#             */
/*   Updated: 2022/08/04 19:08:11 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_uns(unsigned int n)
{
	if (n > 9)
	{
		ft_putnbr_uns(n / 10);
		ft_putnbr_uns(n % 10);
	}
	else
		ft_putchar((int)n + 48);
}
