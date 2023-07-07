#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercasei
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int n, i;

	for (n = 0; n < 10; n++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
	}
}
