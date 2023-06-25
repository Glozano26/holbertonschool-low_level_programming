#include "main.h"
#include <stdio.h>
/**
 * print_triangle -  prints a triangle, followed by a new line
 * @size - input print '#'
 * Return: Always 0.
 */
void print_square(int size)
{
	int esp, q, numeral;

	if (size <= 0)
	{
		putchar('\n')
	}
	for (esp = 1; esp <= size; esp++)
	{
		for (q = 1; q <= size - esp; q++)
		{
			putchar(' ');
		}
		for (numeral = 1; numeral <= esp; numeral++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
