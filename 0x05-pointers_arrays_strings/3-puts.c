#include "main.h"

/**
 * _puts - prints a sting. followed by a new line,
 * @str: point to the string to print
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;
		while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
