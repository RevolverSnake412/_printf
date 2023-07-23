#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - Similar to printf standard function.
 * @format: The type the user will choose.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	int counter = 0;
	const char *p = format;
	va_list args;

	va_start(args, format);
	while (*p)
	{
		if (*p == '%')
		{
			p++;

			switch (*p)
			{
			case 'c':
				_printf_c((char)va_arg(args, int));
				counter++;
				break;
			case 's':
				counter += _printf_s(va_arg(args, char *));
				break;
			case '%':
				write(1, "%", 1);
				counter++;
				break;
			}
		}
		else
		{
			write(1, p, 1);
			counter++;
		}
		p++;
	}
	va_end(args);
	return (counter);
}
