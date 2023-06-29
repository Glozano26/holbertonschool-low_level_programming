#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0, middle;
	char *p = str;

	while (*p != '\0')
	{
		len++;
		p++;
	}
	middle = len / 2;

	while (str[middle] != '\0')
	{
		putchar(str[middle]);
		middle++;
	}
	putchar('\n');
}
