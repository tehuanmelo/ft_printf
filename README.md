## ft_printf
A custom implementation of the printf function from the C Standard Library.

## Table of Contents

- [Introduction](#introduction)
- [Compilation](#compilation)
- [Usage](#usage)
- [Supported Conversions](#supported-conversions)
- [Contribution](#contribution)
- [Author](#author)
- [Contact](#contact)

## Introduction
ft_printf is a project from the 42 curriculum that involves recreating the printf function, a standard function in the C library for formatted output. The function should support a wide range of conversion specifiers and formatting options, while also being efficient and easy to use.

## Compilation

To use the ft_printf in your own project, you will need to include the `"libftprintf.h"` header file in your code, and link the program using the `"-lft"` flag when compiling.

for example:

````
gcc -o main main.c -L. -lftprintf
````
You can also use the ft_printf in other projects by copying the `"libftprintf.a"` file to the project's directory and linking it using the `"-lft"` flag.

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

## Author
ft_printf was created by @tehuanmelo

## Contact

Feel free to contact me on slack or via email

email - `tehuanmelo@gmail.com`

twitter - `@tehuanmelo`

slack - `tde-melo`
