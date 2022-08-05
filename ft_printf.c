/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 22:31:42 by tehuanmelo        #+#    #+#             */
/*   Updated: 2022/08/05 09:40:09 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_printf(const char *s, ...)
{
    const char *str = s;
    (void)str;
    int print_len = 0;
    va_list ap;
    va_start(ap, s);

    while (*s)
    {
        if (*s == '%' && (*(s + 1)) == '%')
        {
            ft_putchar(37);
            print_len++;
            s++;
        }
        else if (*s == '%')
        {
            s++;
            if (*s == 's')
            {
                ft_putstr(va_arg(ap, char *));
                print_len ++;
            }
            else if (*s == 'c')
            {
                ft_putchar(va_arg(ap, int));
                print_len++;
            }
            else if (*s == 'i')
            {
                ft_putnbr(va_arg(ap, int));
                print_len++;
            }
            else if (*s == 'u')
            {
                ft_putnbr_uns(va_arg(ap, unsigned int));
                print_len++;
            }
            else if (*s == 'd')
            {
                ft_base(va_arg(ap, unsigned int), 10);
                print_len++;
            }
            else if (*s == 'x')
            {
                ft_base(va_arg(ap, unsigned int), 16);
                print_len++;
            }
            else
            {
                ft_putchar(*s);
                print_len++;
            }
        }
        else
        {
            ft_putchar(*s);
            print_len++;
        }

        s++;
    }
    va_end(ap);
    // return (print_len);
}

int main()
{
    ft_printf("char: %c \ninteger: %i\ninteger: %i\nunsigned int: %u\nstring: %s\npercentage: %%%%\nhex: %x\ndec: %d\n\n", 'c', INT_MAX, INT_MIN, UINT_MAX, "hello world", 15, 0xf);
    printf("char: %c \ninteger: %i\ninteger: %i\nunsigned int: %u\nstring: %s\npercentage: %%%%\nhex: %x\ndec: %d\n\n", 'c', INT_MAX, INT_MIN, UINT_MAX, "hello world", 15, 0xf);

    // char *s2 = "hello world";

    // printf("%s", "");
    // printf(" %s", "");
    // printf("%s ", "");
    // printf(" %s ", "");
    // printf(" %s ", "-");
    // printf(" %s %s ", "", "-");
    // printf(" %s %s ", " - ", "");
    // printf(" %s %s %s %s %s", " - ", "", "4", "", s2);
    // printf(" %s %s %s %s %s \n\n", " - ", "", "4", "", "2 ");
    // printf(" NULL %s NULL ", NULL);

    // ft_printf("%s", "");
    // ft_printf(" %s", "");
    // ft_printf("%s ", "");
    // ft_printf(" %s ", "");
    // ft_printf(" %s ", "-");
    // ft_printf(" %s %s ", "", "-");
    // ft_printf(" %s %s ", " - ", "");
    // ft_printf(" %s %s %s %s %s", " - ", "", "4", "", s2);
    // ft_printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 ");
    // ft_printf(" NULL %s NULL ", NULL);
}