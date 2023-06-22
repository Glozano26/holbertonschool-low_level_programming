#include "main.h"
#include <stdio.h>
/**
 * add - adds two integers
 * @int - parameters
 * Return: Always 0.
 */
int add(int a, int b)
{
	int sum = a + b;

	int tens = sum / 10;

	int ones = sum % 10;

	_putchar(tens + '0');
	_putchar(ones + '0');

	return (sum);
}
