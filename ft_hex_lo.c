/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_lo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-melo <tde-melo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:23:30 by tehuanmelo        #+#    #+#             */
/*   Updated: 2022/08/05 16:29:22 by tde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_hex_lo(unsigned long int n)
{
    char *str = "0123456789abcdef";
    int count;
    
    count = 0;
    if (n >= 16)
    {
        count += ft_hex_lo(n / 16);
        count += ft_hex_lo(n % 16);
    }
    else
        count += ft_putchar(str[n]);
    return (count);
}
