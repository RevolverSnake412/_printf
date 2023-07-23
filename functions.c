#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _printf_c - For outputting a single character.
 * @content: Provided by user.
 *
 * Return: 0 on success.
 */
int _printf_c(char content)
{
	char c = content;

	write(1, &c, 1);
	return (0);
}

/**
 * _printf_s - For outputting a string.
 * @content: Provided by user.
 *
 * Return: 0 on success.
 */
int _printf_s(char *content)
{
	char *str = content;
	int len = 0;

	while (str[len])
		len++;

	write(1, str, len);

	return (len);
}

/**
 * _printf_d - For outputting a decimal integer.
 * @num: Decimal integer provided by user.
 *
 * Return: Number of characters printed on success.
 */
int _printf_d(int num)
{
	char buffer[20];
	int len;

	len = snprintf(buffer, 20, "%d", num);
	write(1, buffer, len);

	return len;
}
