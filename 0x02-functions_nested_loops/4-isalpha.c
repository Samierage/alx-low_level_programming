#include "main.h"

/**
 * isalpha - chexks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is a later, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
	return (1);
	else
	return (0);
}
