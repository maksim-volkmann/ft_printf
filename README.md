# ft_printf

<div align="center">
	<img src="https://github.com/maksim-volkmann/42-project-badges/blob/main/badges/ft_printfe.png" width="200" alt="Libft badge" />
</div>

ft_printf is a custom implementation of the standard C library function [printf](https://www.tutorialspoint.com/c_standard_library/c_function_printf.htm). It mimics the behavior of printf while handling a subset of format specifiers. The project was created as part of the 42 School curriculum, focusing on modular design and low-level programming techniques.

### Supported Format Specifiers:
```
%c: Prints a single character.
%s: Prints a string.
%p: Prints a pointer address in hexadecimal format.
%d: Prints a decimal (base 10) number.
%i: Prints an integer in base 10.
%u: Prints an unsigned decimal (base 10) number.
%x: Prints a number in hexadecimal (base 16) lowercase.
%X: Prints a number in hexadecimal (base 16) uppercase.
%%: Prints a percent sign.
```
### Features:
Recreates the functionality of printf for the above specifiers.
Utilizes variadic functions (va_start, va_arg, va_end) to handle dynamic arguments.
Built as a static library libftprintf.a.
Relies on functions from libft for core operations.
How to Compile and Run:

### Simply run make in the project directory:
```
make
```

### Include the library in your project:
```
gcc main.c -L. -lftprintf -o my_program
```

### Use ft_printf as a drop-in replacement for printf:
```
ft_printf("Hello, %s! You are number %d.\n", "world", 42);
```
