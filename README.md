**`_printf` function similar to the standard C function `printf`**

TODO:
1. We use `stdarg.h` for handling variadic arguments.

2. Define `_printf` function, taking a format string and variadic arguments.

3. Use `va_start` to initialize the argument list.

4. Iterate over the format string character by character.

5. When encountering the % character, handle the format specifier that follows (%d, %s, %c, %i, %f) using `va_arg` to retrieve the corresponding argument from the list.

6. Use appropriate output functions `putchar` to print the formatted output.
 
7. Continue iterating until reaching the end of the format string.

8. Use `va_end` to clean up the argument list.
