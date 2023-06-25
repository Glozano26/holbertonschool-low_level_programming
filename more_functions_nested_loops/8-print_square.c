#include <stdio.h>
#include "main.h"
/**
 * print_square - prints a square, followed by a new line
 *@size: input print '#'
 * Return: Always 0.
 */
void print_square(int size)
{
	int p, q;

	if (size <= 0)
	{
		putchar('\n');
	}
	for (p = 1; p <= size; p++)
	{
		for (q = 1; q <= size; q++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
