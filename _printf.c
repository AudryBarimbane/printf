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
	int n = 0, a = 0, b;

	m_format t[] = {
		{"%c", print_char}, {"%s", print_string}, {"%r", print_srev},
		{"%S", print_ex_string},
		{"%d", print_decimal}, {"%i", print_integer}
	};

	va_start(ap, format);

	if (format == NULL || format[0] == "%" || format[1] == '\0')
		return (-1);
Here:
	while (*format != '\0')
	{
		b = 13;
		while (b >= 0)
		{
			if (t[b].td[0] == format[a] && t[b].td[1] == format[a + 1])
			{
				n += t[b].func(ap);
				a = a + 2;
				goto Here;
			}
			b--;
		}
		_putchar(format[a]);
		n++;
		a++;
	}
	va_end(ap);
	return (n);
}
