#include "main.h"
/**
 * _putchar - checks for code uppercase character
 * @c: The character to be checked
 * Return: Always 0.
 */

int _Isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
