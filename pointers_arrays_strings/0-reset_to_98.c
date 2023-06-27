#include <stdio.h>
#include "main.h"
/**
 * reset_to_98 - parameter and updates the value it points to to 98
 * @n: parameter
 * Return: Always 0.
 */
void reset_to_98(int *n)
{
	int m;
	int *n;

	m = 402;
	n = &m;
	printf("n=%d\n", m);
	*n = 98;
	printf("n=%d\n", m)

}
