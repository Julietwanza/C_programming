#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenates two strings
 *
 * @dest :- first string to be concatinated with src
 * @src :- second string to be concatinated with dest
 * @n :- number of elements to concatenate in
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
