#include "main.h"
#include <stdio.>
/**
 * print_triangle - a function that prints a triangle
 * @size: size of the triangle
 * Return: triangle of '#'s
 */
void print_triangle(int size)
{
	int esp, q, numeral;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (q = 0; q <= (size - 1); q++)
		{
			for (esp = 0; esp < (size - 1) - q; esp++)
			{
				putchar(' ');
			}
			for (numeral = 0; numeral <= q; numeral++)
			{
				putchar('#');
			}
		putchar('\n');
		}
	}
}
