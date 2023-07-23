#include "main.h"
#include "unistd.h"

/**
 * _printf_c: For outputting a single character.
 * @content: Provided by the user.
 *
 * Return: 0 on success
 */
int _printf_c(char content)
{
    char c = content;

    write(1, &c, 1);
    return (1);
}

/**
 * _printf_s: For outputting a string.
 * @content: Provided by the user.
 *
 * Return: the length of the string printed
 */
int _printf_s(char *content)
{
    if (content == NULL)
        return (write(1, "(null)", 6));
    
    int len = 0;

    while (content[len])
        len++;

    write(1, content, len);
    return (len);
}
