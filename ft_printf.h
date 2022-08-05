/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 18:15:02 by tehuanmelo        #+#    #+#             */
/*   Updated: 2022/08/05 09:39:29 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <stdarg.h>
# include "../libft/libft.h"

void     ft_printf(const char *s, ...);
void    ft_base(unsigned int n, unsigned int base);
void	ft_putnbr_uns(unsigned int n);

#endif