*This project has been created as part of the 42 curriculum by pabaille.*

### Description

This project, called ft_printf, aims to mimic the popular printf function in C. The project can be compiled in a library called `libftprintf.a` using a Makefile that includes the following rules: $(NAME), all, clean, fclean, and re.

### Instructions

A Makefile is provided to compiling the library. Here are its rules:
- **all:** automatic rule when you just write "make" with no rule, and equivalent to the "libftprintf.a" rule described below,
- **libftprintf.a:** compiles the libftprintf library using the object files (.o) of the functions, compiled with the flags -Wall -Wextra -Werror,
- **clean:** removes the object files (.o) of the functions,
- **fclean:** removes the object files (.o) of the functions and the existing libftprintf.a file,
- **re:** removes the object files (.o) of the functions and the existing libftprintf.a file, then recompiles everything to recreate the object files (.o) and the libftprintf.a file.


### Resources

Here is a web page explaining how the original `printf` function—which has been imitated in my `ft_printf`—works: *https://koor.fr/C/cstdio/printf.wp*<br>
(By the way, no AI was used for this project.)

### Library Description

`libftprintf.a` contains 3 C functions:
- ft_printf, the principal function which mimic the original printf function,
- ft_putnbr, used by ft_printf to write numbers, 
- And ft_putstr, used by ft_printf to write strings.

### Limits

My function only handle the following conversions: cspdiuxX% and not implement the buffer management of the original printf().