#include "main.h"

/**
 * swap_int - swaps the values of int a and int b
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;

}
