*This project has been created as part of the 42 curriculum by beciftci.*

## Description
This project is a recreation of the standard C library function `printf()`. The primary goal of `ft_printf` is to understand variadic functions in C and build a well-structured, extensible text formatting function. This implementation handles basic formatting constraints without the buffer management found in the original standard `libc` implementation.

The function handles the following conversions: `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, and `%%`.

## Instructions
To compile the library, you need a standard C compiler (`cc` or `gcc`) and `make`.

1. Clone the repository or download the source files.
2. Run `make` at the root of the repository.
3. The Makefile will compile the source files using `-Wall -Wextra -Werror` flags and generate a `libftprintf.a` static library.
4. You can include `ft_printf.h` in your C projects and compile them alongside `libftprintf.a`.

```bash
make
make clean   # To remove object files
make fclean  # To remove object files and the library file
make re      # To recompile everything from scratch