#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @int: integer last digit
 * Return: Always 0.
 */
int print_last_digit(int r)
{
	int last_digit = r % 10;
	_putchar(last_digit + '0');
	return last_digit;
}
