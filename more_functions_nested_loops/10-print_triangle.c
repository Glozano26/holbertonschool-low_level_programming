#include "main.h"
#include <stdio.h>
/**
 * print_triangle - a function that prints a triangle
 * @size: size of the triangle
 * Return: triangle of '#'s
 */
void print_square(int size)
{
	int esp, q, numeral;

	if (size <= 0)
	{
		putchar('\n');
	}
	for (esp = 0; esp <= (size - 1); esp++)
	{
		for (q = 0; q < (size - 1) - esp; q++)
		{
			putchar(' ');
		}
		for (numeral = 0; numeral <= esp; numeral++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
