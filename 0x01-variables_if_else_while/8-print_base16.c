#include <stdio.h>

/**
 *  main - Prints all single digit numbers of base 16 starting from 0
 *
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 16; num++)
		putchar((num % 16) + '0');
	putchar('\n');
	return (0);
}
