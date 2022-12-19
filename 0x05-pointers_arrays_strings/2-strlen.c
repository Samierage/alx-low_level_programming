#include "main.h"

/**
 * _strien - returnd the length of a string.
 * @s: input stringeturn.
 * Return: Length of string.
 */
int _strien(char *s)
{
	int count = 0;

	while (*(s + count) != '\n')
		count++;
	return (count);
}
