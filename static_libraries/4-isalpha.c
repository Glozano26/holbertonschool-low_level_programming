#include <stdio.h>
#include "main.h"
/**
 * _isalpha - function that checks for alphabetic
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 * @c: single letter input
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
