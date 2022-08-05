/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-melo <tde-melo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 22:31:42 by tehuanmelo        #+#    #+#             */
/*   Updated: 2022/08/05 17:03:45 by tde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *s, ...)
{
    int print_len = 0;
    va_list ap;
    va_start(ap, s);

    while (*s)
    {
        if (*s == '%' && (*(s + 1)) == '%')
        {
            print_len += ft_putchar(37);
            s++;
        }
        else if (*s == '%')
        {
            s++;
            if (*s == 'c')
                print_len += ft_putchar(va_arg(ap, int));
            else if (*s == 's')
                print_len += ft_putstr(va_arg(ap, char *));
            else if (*s == 'i' || *s == 'd')
                print_len += ft_putnbr(va_arg(ap, int));
            else if (*s == 'u')
                print_len += ft_putnbr(va_arg(ap, unsigned int));
            else if (*s == 'x')
                print_len += ft_hex_lo(va_arg(ap, unsigned int));
            else if (*s == 'X')
                print_len += ft_hex_up(va_arg(ap, unsigned int));
            else if (*s == 'p'){
                print_len += ft_putstr("0x");
                print_len += ft_hex_lo(va_arg(ap, unsigned long int));
                }
            else
                print_len += ft_putchar(*s);
        }
        else
        {
            print_len += ft_putchar(*s);
        }

        s++;
    }
    va_end(ap);
    return (print_len);
}

// int main()
// {
//     int i = 0, j = 0;
    
//     i += ft_printf("string %%s:       %s\n", "hello");
//     i += ft_printf("character %%c:    %c\n",'x');
//     i += ft_printf("integer %%i:      %i\n",INT_MAX);
//     i += ft_printf("integer %%d:      %d\n",INT_MIN);
//     i += ft_printf("unsigned int %%u: %u\n",UINT_MAX);
//     i += ft_printf("hexadecimal %%x:  %x\n",UINT_MAX);
//     i += ft_printf("pointer %%p:      %p\n", &i);
//     i += ft_printf(" NULL %s NULL \n\n", NULL);
    
//     j += printf("string %%s:       %s\n", "hello");
//     j += printf("character %%c:    %c\n",'x');
//     j += printf("integer %%i:      %i\n",INT_MAX);
//     j += printf("integer %%d:      %d\n",INT_MIN);
//     j += printf("unsigned int %%u: %u\n",UINT_MAX);
//     j += printf("hexadecimal %%x:  %x\n",UINT_MAX);
//     j += printf("pointer %%p:      %p\n", &i);
//     j += printf(" NULL %s NULL \n\n", NULL);
    
    
//     printf("\nft_printf length: %i\nprintf length: %i\n", i, j);
 
// }