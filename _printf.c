#include "main.h"

/**
 * _printf -  produces output according to a format
 * @format: a character string. The format string is
 * composed of zero or more directives.
 *
 * Return:  number of characters printed
 * (excluding the null byte used to end output to strings)
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int n = 0;

	va_start(ap, format);

	while (*format != '\0')
	{

	if (*format == "%")
		format++;
		if (*format == "%")
			_putchar("%");
			n++;
		else if (*format == "c")
		{
			int c1 = va_arg(ap, int);

			_putchar(c1);
			n++;
		}
		else if (*format == "str")

			char *str = va_arg(ap, char *);

			while (*str)
			{
				_putchar(*str);
				str++;
				n++;
			}
		else
		{
			_putchar(*format);
			n++;
		}
		format++;
	}
	va_end(ap);
	return (n);
}

