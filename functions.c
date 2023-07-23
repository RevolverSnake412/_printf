#include "main.h"
#include "unistd.h"

/**
 * print_char - For outputting a single character.
 * @content: Provided by the user.
 *
 * Return: 1 on success
 */
int print_char(char content)
{
	char c = content;

	write(1, &c, 1);
	return (1);
}

/**
 * print_string - For outputting a string.
 * @content: Provided by the user.
 *
 * Return: the length of the string printed
 */
int print_string(char *content)
{
	if (content == NULL)
		return (write(1, "(null)", 6));

	int len = 0;

	while (content[len])
		len++;

	write(1, content, len);
	return (len);
}
