#include "main.h"
#include <stdio.h>
/**
 * is_prime_number_aux - variable auxiliar
 * @n: integer
 * @div: divisor
 * Return: Always 0.
 */
int is_prime_number_aux(int n, int div)
{
	if (n <= 1)
	{
	return (0);
	}
	if (div * div > n)
	{
	return (1);
	}
	if (n % div == 0)
	{
	return (0);
	}
	return (is_prime_number_aux(n, div + 1));
}
/**
 * is_prime_number - function prints integer
 * @n: input parameter
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	return (is_prime_number_aux(n, 2));
}
