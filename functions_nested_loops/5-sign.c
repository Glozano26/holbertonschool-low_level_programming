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
		printf("+1");
		return (1);
	}
	else if (n == 0)
	{
		printf("0");
		return (0);
	}
	else
	{
		printf("-1");
		return (-1);
	}
}
