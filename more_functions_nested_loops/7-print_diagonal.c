#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - draws a diagonal line
 * @n: diagonal line
 * Return: void
 */
void print_diagonal(int n)
{
	int p, q;

	if (n <= 0)
	{
		putchar('\n');
	}

	for (p = 1; p <= n; p++)
	{
		for (q = 1; q <= p; q++)
		{
			if (p == q)
			{
				putchar('\\');
			}
			else
			{
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
