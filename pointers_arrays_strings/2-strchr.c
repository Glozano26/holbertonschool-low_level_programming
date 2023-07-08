#include <stdio.h>
#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: pointer
 * @c: input character
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (c == *s)
		{
			return (s);
		}
	s++;
	}
	return (NULL);
}
