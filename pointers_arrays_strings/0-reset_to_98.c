#include <stdio.h>
#include "main.h"
/**
 * reset_to_98 - parameter and updates the value it points to to 98
 * @n: parameter
 * Return: Always 0.
 */
void reset_to_98(int *n)
{
	int n;
	int *n;

	n = 402;
	n = &n;
	printf("n=%d\n", n);
	*n = 98;
	printf("n=%d\n", n);

}
