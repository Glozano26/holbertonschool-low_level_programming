#include <stdio.h>
/**
 * rev_string - function that reverses a string.
 * @s: char input
 * Return: Always 0
 */
void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while (i >= 0)
	{
		i--;
	}
	putchar('\n');
}
