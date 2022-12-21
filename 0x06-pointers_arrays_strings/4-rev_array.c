#include "main.h"
/**
 * reverse_array - rev3rse array of integer
 * @a: array
 * @n: number of elements of array
 * Return: void
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
