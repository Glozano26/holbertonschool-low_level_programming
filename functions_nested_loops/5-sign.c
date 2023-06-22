#include <stdio.h>
#include "main.h"
/**
 * print_sig - function that prints the sign of a number
 * Return: 1 and prints + n, 0 prints 0 and, -1 prints -
 * @n: prints the sign of a number
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
