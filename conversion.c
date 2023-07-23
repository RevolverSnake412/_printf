#include "main.h"
#include "unistd.h"

int count = 0;

/**
 * _itoa - Convert an integer to a string.
 * @n: The integer to be converted.
 * @str: The buffer to store the string representation.
 *
 * Return: The length of the string.
 */
int _itoa(int n, char *str)
{
    int i = 0;
    int is_negative = 0;

    if (n == 0)
    {
        str[i++] = '0';
    }
    else if (n < 0)
    {
        is_negative = 1;
        n = -n;
    }

    while (n != 0)
    {
        str[i++] = (n % 10) + '0';
        n /= 10;
    }

    if (is_negative)
        str[i++] = '-';

    str[i] = '\0';

    // Reverse the string
    int start = 0;
    int end = i - 1;
    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    return i;
}

/**
 * _printf_d - For outputting an integer (decimal).
 * @n: Integer to be printed.
 *
 * Return: Number of characters printed.
 */
int _printf_d(int n)
{
    char str[12]; // 12 is large enough to hold INT_MIN as a string
    int len = _itoa(n, str);
    _printf_s(str);
    return len;
}

/**
 * _printf_i - For outputting an integer (decimal).
 * @n: Integer to be printed.
 *
 * Return: Number of characters printed.
 */
int _printf_i(int n)
{
    return _printf_d(n);
}
