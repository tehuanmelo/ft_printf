#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int ft_printf(const char *fmt, ...);
int ft_putchar(int c);
int ft_putstr(char *str);
int ft_putnbr(long n);
int ft_putlox(unsigned long n);
int ft_putupx(unsigned long n);
int ft_putptr(unsigned long n);
int	ft_puthex(unsigned long n, char x);

#endif