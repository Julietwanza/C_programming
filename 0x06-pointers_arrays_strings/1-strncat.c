#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenates two strings
 *
 * @dest :- first string to be concatinated with src
 * @src :- second string to be concatinated with dest
 * @n :- number of elements to concatenate in
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; src[b] != '\0'; b++, n--, a++)
	{
		dest[a] = src[b];
	}
	return (dest);
}
