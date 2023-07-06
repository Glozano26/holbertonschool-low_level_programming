#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - function that returns the value
 * @x: base
 * @y: exponent
 * Return: Always 0.
 */
int _pow_recursion(int n, int y)
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
