#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string, in reverse
 * @s: char input
 * Return: Always 0
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');
}
