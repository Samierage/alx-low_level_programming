#include "main.h"

/**
 * _strlen - returnd the length of a string.
 * @s: input stringeturn.
 * Return: Length of string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\n')
		count++;
	return (count);
}
