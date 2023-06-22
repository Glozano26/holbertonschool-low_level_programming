#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @int: integer last digit
 * Return: Always 0.
 */
int print_last_digit(int r)
{
	int r, s;
	char ult;

	if (r > 0)
	{
		s = r % 10;
		ult = '0' + s;
		_putchar(ult);
	}
	else
	{

		return (0);
	}
}
