#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: char input
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
