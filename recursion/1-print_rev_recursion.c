#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - function that prints a reverse
 * @s: pointer
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
	else
	{
		putchar('\n');
	}
}
