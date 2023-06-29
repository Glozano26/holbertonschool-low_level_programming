#include <stdio.h>
/**
 * rev_string - function that reverses a string.
 * @s: char input
 * Return: Always 0
 */
void rev_string(char *s)
{
	char temp = s[0];
	int str = 0;
	int i;

	while (s[str] != '\0')
	{
		str++;
	}

	for (i = 0; i < str; i++)
	{
		str--;
		temp = s[i];
		s[i] = s[str];
		s[str] = temp;
	}
}
