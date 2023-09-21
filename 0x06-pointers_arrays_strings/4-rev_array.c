#include "main.h"
/**
 * reverse_array - reverses array of integers
 * @a: pointer array
 * @n: number of elements of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int v;

	for (i = 0; i < n--; i++)
	{
		v = a[i];
		a[i] = a[n];
		a[n] = v;
	}
}
