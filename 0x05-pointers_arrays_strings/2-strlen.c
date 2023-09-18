#include "main.h"

/**
 * _strlen - returns the lenth of a string
 * @s: the string to evaluate
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	return (a);
}
