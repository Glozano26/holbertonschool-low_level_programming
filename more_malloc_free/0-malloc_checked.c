#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * malloc_checked - function that allocates memory
 * @b: integer
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	char *ret;

	ret = malloc(b);
	if (ret == NULL)
	{
		exit(98);
	}
	return (ret);
}
