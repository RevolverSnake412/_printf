#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);
	int chars_printed = 0;

	while (*format != '\0')
	{
		if (*format != '%')
		{
			putchar(*format);
			chars_printed++;
		}
		else
		{
			format++; // Move past the '%'
			switch (*format)
			{
			case 'c':
				putchar(va_arg(args, int));
				chars_printed++;
				break;
			case 's':
			{
				const char *str = va_arg(args, const char *);
				while (*str != '\0')
				{
					putchar(*str);
					str++;
					chars_printed++;
				}
			}
			break;
			case '%':
				putchar('%');
				chars_printed++;
				break;
			default:
				putchar('%');
				putchar(*format);
				chars_printed += 2;
				break;
			}
		}
		format++;
	}

	va_end(args);
	return chars_printed;
}

int main()
{
	int num = 42;
	char ch = 'X';
	const char *str = "Hello, world!";

	int printed_chars = _printf("This is a test: %d %c %s %%\n", num, ch, str);
	printf("\nNumber of characters printed: %d\n", printed_chars);

	return 0;
}
