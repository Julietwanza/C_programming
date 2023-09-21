#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings
 *
 * @dest :- first string to be concatinated with src
 * @src :- second string to be concatinated with dest
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; src[b] != '\0'; b++, a++)
	{
		dest[a] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
