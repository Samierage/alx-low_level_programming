#include "main.h"

/**
 * _puts - prints a sting. followed by a new line,
 * @str: point to the string to print
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		++str;
	}
	_putchar('\n');
}
