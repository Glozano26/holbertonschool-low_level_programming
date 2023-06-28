#include <stdio.h>
/**
 * rev_string - function that reverses a string.
 * @s: char input
 * Return: Always 0
 */
void rev_string(char *s)
{
	int len = 0;
	char *ptr = s;

	while (*ptr != '\0')
	{
		len++;
		ptr++;
	}
	char *start = s;
	char *end = s + len - 1;
	char temp;
	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
	ptr = s;
	while (*ptr != '\0')
	{
		ptr++;
	}
}
