/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_up.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-melo <tde-melo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:23:30 by tehuanmelo        #+#    #+#             */
/*   Updated: 2022/08/05 16:38:35 by tde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_hex_up(unsigned long int n)
{
    char *str = "0123456789ABCDEF";
    int count;
    
    count = 0;
    if (n >= 16)
    {
        count += ft_hex_up(n / 16);
        count += ft_hex_up(n % 16);
    }
    else
        count += ft_putchar(str[n]);
    return (count);
}
