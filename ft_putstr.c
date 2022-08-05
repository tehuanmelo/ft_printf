/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-melo <tde-melo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 12:55:34 by tde-melo          #+#    #+#             */
/*   Updated: 2022/08/05 17:01:43 by tde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int counter;

	counter = 0;
	if (!s)
		return ft_putstr("(null)");
	while (*s)
		counter += ft_putchar(*s++);
	return (counter);
}
