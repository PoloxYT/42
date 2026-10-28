*This project has been created as part of the 42 curriculum by pabaille.*

### Description

This project, called libft, aims to group many C functions into a single personal library, making them easy to reuse. Most of these functions are implementations of existing functions from the libc library, while others are useful functions not in libc, or functions designed for working with linked lists. The library can be compiled using a Makefile that includes the following rules: $(NAME), all, clean, fclean, and re.

### Instructions

A Makefile is provided to compiling the library. Here are its rules:
- **all:** automatic rule when you just write "make" with no rule, and equivalent to the "libft.a" rule described below,
- **libft.a:** compiles the libft library using the object files (.o) of the functions, compiled with the flags -Wall -Wextra -Werror,
- **clean:** removes the object files (.o) of the functions,
- **fclean:** removes the object files (.o) of the functions and the existing libft.a file,
- **re:** removes the object files (.o) of the functions and the existing libft.a file, then recompiles everything to recreate the object files (.o) and the libft.a file.


### Resources

Here is a website that provides explanations of what the various functions in the `libc` library do—some of which are also included in our `libft.a`: *https://koor.fr/C/Index.wp*<br>
AI has been used for code testing, errors searching and ft_lst*'s mains. But no code was generated.

### Library Description

`libft.a` contains a total of 43 C functions, divided into 3 parts:
- The first part consists of functions recreated from those already existing in the `libc` library.
- The second part contains other useful functions not found in `libc`, such as `ft_putstr_fd`, `ft_split`, and others.
- Finally, the last part contains 9 functions useful for manipulating linked lists in C.