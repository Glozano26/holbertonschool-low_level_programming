#include "main.h"
#include <stdio.h>

/**
 * reverse_array - print an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int l, r, i;
	int middle = n / 2;

	n -= 1;

	for (i = 0; i < middle; i++)
	{
		l = a[n - i];
		r = a[i];
		a[i] = l;
		a[n - i] = r;
	}
}
