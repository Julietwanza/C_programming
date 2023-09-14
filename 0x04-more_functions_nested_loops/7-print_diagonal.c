#include "main.h"

/**
 * print_diagonal - prints diagonal lines
 * @n: parameter indicating the number of times '\' prints
 *
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('\\');
		}
		_putchar('\n');
	}
}
