#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - returns the natural square
 * @n: input
 * _sqrt_recursion_aux - computing sqrt
 * @n: input
 * @y: input
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_aux(n, 1));
}
int _sqrt_recursion_aux(int n, int y)
{
	if (n > (y * y))
	{
		y++;
	}
	else if (n < (y * y))
	{
		return (-1);
	}
	else if (n == (y * y))
	{
		return (y);
	}
	return (_sqrt_recursion_aux((n), y++));
}
