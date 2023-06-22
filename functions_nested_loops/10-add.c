#include "main.h"
#include <stdio.h>
/**
 * add - adds two integers
 * @int - parameters
 * Return: Always 0.
 */
int add(int, int)
{
	int a, b, sum;

	sum = a + b;
	_putchar(sum / 10 + '0');
	_putchar(sum % 10 + '0');

	return (sum);
}
