#include "main.h"
#include "unistd.h"
#include <stdlib.h>

int count = 0;

/**
 * _putchar_c - For outputting a single character.
 * @content: Provided by user.
 *
 * Return: 0 on success.
 */
int _printf_c(char content)
{
	char c = content;

	write(1, &c, 1);
	count++;
	return (0);
}

/**
 * _putchar_s - For outputting a string.
 * @content: Provided by user.
 *
 * Return: 0 on success.
 */
int _printf_s(char *content)
{
	char *str = content;
	char *dynamic_str;
	int len = 0, i;

	while (str[len])
		len++;

	dynamic_str = malloc(len + 1);

	if (!dynamic_str)
	{
		return (-1);
	}

	for (i = 0; i <= len; i++)
		dynamic_str[i] = str[i];

	write(1, dynamic_str, len);
	count += len;

	free(dynamic_str);

	return (0);
}
