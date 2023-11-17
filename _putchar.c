#include "main.h"

/**
 * _putchar - print to stdout
 * @c: char to print
 *
 * Return: int
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
