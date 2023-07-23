#include "main.h"
#include "unistd.h"

int count = 0;

/**
 * _putchar_c: For outputing single character.
 * @content: Provided by user.
 *
 * Return: 0 on success
 */
int _printf_c(char content)
{
	char c = content;

	write(1, &c, 1);
	count++;
	return (0);
}

/**
 * _putchar_s: For outputing a string.
 * @content: Provided by user.
 *
 * Return: 0 on success
 */
int _printf_s(char *content)
{
	char *str = content;
	int len = 0;

	while (str[len])
		len++;

	write(1, str, len);
	count += len;
	return (0);
}
