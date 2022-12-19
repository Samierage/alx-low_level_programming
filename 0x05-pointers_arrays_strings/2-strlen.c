#include "main.h"

/**
 * _strlen - returnd the length of a string.
 * @s: input Holberton.
 * Return: length of string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\n')
		count++;
	return (count);
}
