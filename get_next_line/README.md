*This project has been created as part of the 42 curriculum by pabaille.*

### Description

This project, titled `get_next_line`, aims to create a function in the C language capable of reading a line from a file descriptor, with each subsequent call to the function retrieving the next line. Each line read is stored in a character string, which the function then returns.

### Instructions

To use the function, you need to open a file descriptor (a file or a console file descriptor) and pass the file descriptor as argument in the get_next_line function. The function will take care of the rest ! Each time you call it, get_next_line will return the line after the last returned line. So you can use it in a loop to read a big part of the file descriptor or if you want, all the file descriptor. You just need to compile the function with the flag `-D BUFFER_SIZE=n` and replace the `n` with a number of your choice. The get_next_line function will read the file descriptor `BUFFER_SIZE` characters by `BUFFER_SIZE` characters. If you choose `"1"` or (a small number), get_next_line will be slow because it will read the file descriptor one character by one character. And if you choose a big `BUFFER_SIZE`, the function will be faster.<br><br>
`WARNING: The BUFFER_SIZE needs to be greater than 0, if it's not, the function will return NULL !`

### Resources

Here is a youtube video explaining the `get_next_line` function: *https://www.youtube.com/watch?v=U6hEX-rmGYM*<br>
AI was used for questions and error searching but not to generate code.