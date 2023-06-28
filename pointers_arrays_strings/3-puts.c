#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string, followed by a new line
 * @s: char input
 * Return: Always 0.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
}
