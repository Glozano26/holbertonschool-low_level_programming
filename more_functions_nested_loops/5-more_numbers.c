#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i, c;

	for (i = 1; i <= 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c < 10)
			{
				putchar(c + '0');
			}
			else
			{
				putchar((c / 10) + '0');
				putchar((c % 10) + '0');
			}
		}
		putchar('\n');
	}
}
