*This project has been created as part of the 42 curriculum by beciftci.*

# ft_printf

## Description

A C implementation of selected `printf` conversions. It uses variadic arguments, separates formatting by value type, and returns the number of characters written on success.

Supported conversions: `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, and `%%`.

## Instructions

Use a C compiler and Make to build `libftprintf.a` from the repository root.

```sh
make
cc -Wall -Wextra -Werror -I. main.c libftprintf.a -o demo
```

Provide your own `main.c`, include [ft_printf.h](./ft_printf.h), and call `ft_printf`. Use `make clean` to remove object files or `make fclean` to also remove the library.
