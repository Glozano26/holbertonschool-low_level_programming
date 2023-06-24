#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - draws a diagonal line
 * @n: diagonal line
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 0;

	while (i < n)
	{
		putchar('\\');
		putchar('\n);
	}
	putchar('\n');
}
