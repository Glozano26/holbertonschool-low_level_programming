#include <stdio.h>
#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9)
 * Return: 1 if c is lowercase, 0 if otherwise
 * @c: single letter input
 */
int _isdigit(int c);
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
