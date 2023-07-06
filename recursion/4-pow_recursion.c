#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: Always 0.
 */
int _pow_recursion(int n)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y <= 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}
