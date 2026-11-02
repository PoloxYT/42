*This project has been created as part of the 42 curriculum by pabaille.*

### Description

This project, titled `get_next_line`, aims to create a function in the C language capable of reading a line from a file descriptor, with each subsequent call to the function retrieving the next line. Each line read is stored in a character string, which the function then returns. The project can also be compiled into a library named `libnextline.a` using a Makefile that includes the following rules: `$(NAME)`, `all`, `clean`, `fclean`, and `re`.

### Instructions

A Makefile is provided to compiling the project as a library. Here are its rules:
- **all:** automatic rule when you just write "make" with no rule, and equivalent to the "libnextline.a" rule described below,
- **libnextline.a:** compiles the libnextline library using the object files (.o) of the functions, compiled with the flags -Wall -Wextra -Werror and a BUFFER_SIZE,
- **clean:** removes the object files (.o) of the functions,
- **fclean:** removes the object files (.o) of the functions and the existing libnextline.a file,
- **re:** removes the object files (.o) of the functions and the existing libnextline.a file, then recompiles everything to recreate the object files (.o) and the libnextline.a file.


### Resources

Here is a youtube video explaining the `get_next_line` function: *https://www.youtube.com/watch?v=U6hEX-rmGYM*<br>
AI was used for questions and error searching but not to generate code.

### Library Description

`libnextline.a` contains 5 utilisable C functions:
- get_next_line, the principal function of the project,
- ft_memcpy, used by get_next_line to generate the return string, 
- ft_strlen, used by get_next_line to take some string lengths,
- ft_substr, used by get_next_line to take the future lines to read,
- And ft_strjoin, used by get_next_line to add the buf to the future lines to read.