/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:23:30 by tehuanmelo        #+#    #+#             */
/*   Updated: 2022/08/05 09:35:40 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

void ft_base(unsigned int n, unsigned int base)
{
    char *str = "0123456789abcdef";
    
    if (n >= base)
    {
        ft_base(n / base, base);
        ft_base(n % base, base);
    }
    else
        ft_putchar(str[n]);
}
