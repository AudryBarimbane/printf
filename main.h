#ifndef _MIAN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>
#include <stdio.h>

/**
 * struct format - specifiers for printf
 * @td: type of specifier
 * @func: pointer to function
 *
 */

typedef struct format
{
	char *td;
	int (*func)();
} m_format;

int _putchar(char c);
int _printf(const char *format, ...);

#endif

