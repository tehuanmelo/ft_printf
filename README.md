## ft_printf
A custom implementation of the printf function from the C Standard Library.

## Table of Contents

- [Introduction](#introduction)
- [Compilation](#compilation)
- [Usage](#usage)
- [Supported Conversions](#supported conversions)
- [Contribution](#contribution)
- [Author](#author)

## Introduction
ft_printf is a project from the 42 curriculum that involves recreating the printf function, a standard function in the C library for formatted output. The function should support a wide range of conversion specifiers and formatting options, while also being efficient and easy to use.

## Compilation

To compile ft_printf, clone the repository and run make in the root directory. This will create the libftprintf.a library, which can be linked to your project.

## Usage
ft_printf is used in the same way as the standard printf function, with the same syntax for format specifiers and arguments. For example:

````
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "world");
    return 0;
}
````

## Supported Conversions

ft_printf supports the following conversion specifiers:

- c: character
- s: string
- p: pointer address
- d or i: signed decimal integer
- u: unsigned decimal integer
- x: unsigned hexadecimal integer (lowercase)
- X: unsigned hexadecimal integer (uppercase)

Author
ft_printf was created by [@tehuanmelo].
